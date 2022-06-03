import glob
import os
import shutil

files=glob.glob("C://Downloads/*.json")

# print(files)

outputPath="C://QMK/qmk_firmware/myJsons/"

for path in files:
    print("move : "+path)
    filename=path.split("\\")[-1]
    shutil.copy(path,outputPath+filename)
    os.remove(path)










