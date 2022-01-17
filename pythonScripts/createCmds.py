"""
sample command

[tihom@ichir0roie-home ~]$
mv Downloads/ichir0roie.json qmk_firmware/keyboards/ergoarrows/keymaps/ichir0roie/ichir0roie.json;
qmk json2c -o qmk_firmware/keyboards/ergoarrows/keymaps/ichir0roie/keymapAG.c qmk_firmware/keyboards/ergoarrows/keymaps/ichir0roie/ichir0roie.json;
qmk flash -kb ergoarrows -km ichir0roie
"""

basePathProject = "qmk_firmware/"
basePathKeyboards = "keyboards/{kb}/"
basePathKeymaps = "keymaps/{km}/"

basePathDownloads = "Downloads/"

basePathOutput = basePathProject + "pythonScripts/Output/"

cwd = "C:/Users/tihom/"
import os

os.chdir(cwd)


class Keymap(object):
    def __init__(self, kb: str, km: str):
        self.keyboard = kb
        self.keymap = km

class CommmandList:
    def __init__(self):
        self.move=None
        self.json2c=None
        self.flash=None

    def all(self):
        return "{};{};{}".format(self.move,self.json2c,self.flash)

class CreateCmds:
    def __init__(self):
        self.targetMaps = []

        if not os.path.exists(basePathOutput):
            os.mkdir(basePathOutput)

        with open(basePathOutput + "cmd.txt", mode="w", encoding="utf-8")as f:
            f.write("")

    def initTargetMaps(self):
        self.targetMaps = []

    def addTargetMaps(self, kb: str, km: str):
        newKeymap = Keymap(kb, km)
        self.targetMaps.append(newKeymap)

    def cmdStrFlash(self, kb: str, km: str):
        return "qmk flash -kb {} -km {}".format(kb, km)

    def cmdStrJson2c(self, kb, km):
        text = "qmk json2c -o {pathOutput} {pathJson}"
        pathKeymap = self.pathKeymapGet(kb, km)
        pathOutput = pathKeymap + "keymapAG.c"
        pathJson = pathKeymap + "{}.json".format(km)
        text = text.format(pathOutput=pathOutput, pathJson=pathJson)
        return text

    def cmdStrMoveFromDownloadToKeymap(self, kb, km):
        pathSave = self.pathKeymapGet(kb, km) + "{}.json".format(km)
        pathDownloadJson = basePathDownloads + "{}.json".format(km)
        text = "mv {} {}".format(pathDownloadJson, pathSave)
        return text

    def cmdStrCombinedAndOthers(self,kb,km)->CommmandList:

        cmdList=CommmandList()

        cmdList.move=self.cmdStrMoveFromDownloadToKeymap(kb,km)
        cmdList.json2c=self.cmdStrJson2c(kb,km)
        cmdList.flash=self.cmdStrFlash(kb,km)

        return cmdList

    def printKeyMapCmd(self,keymap:Keymap,printSingleCommand:bool=False):
        self.printAndSave("--------{}/{}--------".format(keymap.keyboard,keymap.keymap))
        self.printAndSave()

        cmdList=self.cmdStrCombinedAndOthers(keymap.keyboard,keymap.keymap)
        if printSingleCommand:
            self.printAndSave(cmdList.move)
            self.printAndSave(cmdList.json2c)
            self.printAndSave(cmdList.flash)
            self.printAndSave()

        self.printAndSave(cmdList.all())

        self.printAndSave()

        return

    def printAndSave(self, text=""):
        with open(basePathOutput + "cmd.txt", mode="a", encoding="utf-8")as f:
            f.write(text + "\n")
        print(text)

    def pathKeymapGet(self, kb, km):
        text = ""
        text += basePathProject
        text += basePathKeyboards.format(kb=kb)
        text += basePathKeymaps.format(km=km)
        return text

    def printAllTargets(self,printSingleCommand:bool=False):
        for target in self.targetMaps:
            self.printKeyMapCmd(target,printSingleCommand)

    # def getKeyboards(self):
    #     searchPlace=basePathProject+"keyboards"
    #     items=os.listdir(searchPlace)
    #     folders=[i for i in items if os.path.is]
    #     print(folders)

if __name__ == '__main__':
    cc=CreateCmds()

    # cc.getKeyboards()

    cc.addTargetMaps("ergoarrows","ichir0roie")
    cc.addTargetMaps("ergodash","ichir0roie")
    cc.addTargetMaps("","ichir0roie")

    cc.printAllTargets(True)
