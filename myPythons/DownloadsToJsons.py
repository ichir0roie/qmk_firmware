import glob
import os
import shutil

files=glob.glob("C://Users/tihom/Downloads/*.json")

# print(files)

outputPath="C://Users/tihom/qmk_firmware/myJsons/"

for path in files:
    filename=path.split("\\")[-1]
    shutil.copy(path,outputPath+filename)
