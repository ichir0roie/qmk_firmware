import glob
import csv

class CsvToKeyMap:
    def __init__(self):

        self.templateBase=None
        self.templateLayout=None
        self.loadTemplate()

    def compile(self,csvFileName:str,outputPath:str):
        csvData=self.loadCsvData("myScripts/csv/{}.csv".format(csvFileName))
        layerList=self.convertLayerList(csvData)
        self.saveKeyMap(layerList,outputPath)

    def loadTemplate(self):
        with open("myScripts/template/keymapTemplateBase.txt","r",encoding="utf-8")as f:
            self.templateBase=f.read()
        with open("myScripts/template/keymapTemplateLayout.txt","r",encoding="utf-8")as f:
            self.templateLayout=f.read()


    def loadCsvDataList(self):
        csvDataList=[]
        paths=glob.glob("myScripts/csv/*.csv")
        print(paths)
        for path in paths:
            lines=self.loadCsvData(path)
            csvDataList.append(lines)
        return csvDataList,paths

    def loadCsvData(self,path):
        with open(path,"r",encoding="utf-8",newline="")as f:
            r=csv.reader(f)
            lines=[l for l in r]
        return lines

    def convertLayerList(self,csvData:list):
        layerList=[]
        layer=""
        for line in csvData:#type:list
            print(line)
            if len(line)<=0:
                print("continue")
                continue
            if line[0]=="layout":
                if layer=="":
                    continue
                print("append")
                layerList.append(layer)
                layer=""
                continue

            layer+="\t\t"
            for key in line:
                if len(key)<=0:
                    continue
                layer+=key+","
            layer+="\n"

        if layer!="":
            layerList.append(layer)

        return layerList

    def saveKeyMap(self,layerList:list,path:str):
        text=self.templateBase

        layerTexts=""
        for c,layer in enumerate(layerList):
            layerText=self.templateLayout
            layerText=layerText.replace("{number}", str(c))
            layerText=layerText.replace("{map}", layer)
            layerTexts+=layerText
        layerTexts=layerTexts.replace("\n\n", "\n")
        text=text.replace("{layouts}", layerTexts[:-1])
        with open(path,"w",encoding="utf-8")as f:
            f.write(text)

if __name__=="__main__":
    ctk=CsvToKeyMap()
    # csvDataList,paths=ctk.loadCsvDataList()
    # layerListList=[]
    # for csvData in csvDataList:
    #     layerListList.append(ctk.convertLayerList(csvData))
    ctk.compile("nora","myScripts/keymap/nora.c")
















