# all one

mv Downloads/ichir0roie.json qmk_firmware/keyboards/ergoarrows/keymaps/ichir0roie/ichir0roie.json;qmk json2c -o qmk_firmware/keyboards/ergoarrows/keymaps/ichir0roie/keymapAG.c qmk_firmware/keyboards/ergoarrows/keymaps/ichir0roie/ichir0roie.json;qmk flash -kb ergoarrows -km ichir0roie

# flash

qmk flash -kb ergoarrows -km ichir0roie
