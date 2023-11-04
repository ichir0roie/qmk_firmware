import glob
import csv
import os


import sys


class CsvToKeyMap:
    def __init__(self):

        self.templateBase = None
        self.templateLayout = None
        self.loadTemplate()

    def compile(self, csvFileName: str, outputPath: str):
        csvData = self.loadCsvData("myScripts/tsv/{}.tsv".format(csvFileName))
        layerList = self.convertLayerList(csvData)
        self.saveKeyMap(layerList, outputPath)

    def loadTemplate(self):
        with open("myScripts/template/keymapTemplateBase.txt", "r", encoding="utf-8")as f:
            self.templateBase = f.read()
        with open("myScripts/template/keymapTemplateLayout.txt", "r", encoding="utf-8")as f:
            self.templateLayout = f.read()

    def loadCsvDataList(self):
        csvDataList = []
        paths = glob.glob("myScripts/tsv/*.tsv")
        print(paths)
        for path in paths:
            lines = self.loadCsvData(path)
            csvDataList.append(lines)
        return csvDataList, paths

    def loadCsvData(self, path):
        with open(path, "r", encoding="utf-8", newline="")as f:
            r = csv.reader(f, delimiter="\t")
            lines = [l for l in r]
        return lines

    def convertLayerList(self, csvData: list):
        layerList = []
        layer = ""
        for line in csvData:  # type:list
            print(line)
            if len(line) <= 0:
                print("continue")
                continue
            if line[0] == "layout":
                if layer == "":
                    continue
                print("append")
                layer = layer[:-2] + "\n"
                layerList.append(layer)
                layer = ""
                continue

            layer += "\t\t"
            for key in line:
                if len(key) <= 0:
                    continue
                if key == "------":
                    continue
                layer += key + ","
            layer += "\n"

        if layer != "":
            layer = layer[:-2] + "\n"
            layerList.append(layer)

        return layerList

    def saveKeyMap(self, layerList: list, path: str):
        text = self.templateBase

        layerTexts = ""
        for c, layer in enumerate(layerList):
            layerText = self.templateLayout
            layerText = layerText.replace("{number}", str(c))
            layerText = layerText.replace("{map}", layer)
            layerTexts += layerText
        layerTexts = layerTexts.replace("\n\n", "\n")
        text = text.replace("{layouts}", layerTexts[:-1])
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "w", encoding="utf-8")as f:
            f.write(text)


if __name__ == "__main__":
    ctk = CsvToKeyMap()
    args = sys.argv

    if len(args) > 1:

        keyboard = args[1]
        path = args[2]

        ctk.compile(keyboard, path)
    else:
        ctk.compile("nora", "keyboards/nora/v1/keymaps/ichir0roie/keymapAG.c")
        ctk.compile("ergoarrows", "keyboards/ergoarrows/keymaps/ichir0roie/keymapAG.c")
        ctk.compile("helix", "keyboards/helix/rev3_4rows/keymaps/ichir0roie/keymapAG.c")
