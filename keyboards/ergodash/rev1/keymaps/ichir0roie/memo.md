
qmk json2c qmk_firmware/keyboards/ergodash/rev1/keymaps/ichir0roie/ichir0roie_mouse.json

qmk compile -kb ergodash/rev1 -km ichir0roie

qmk json2c -o qmk_firmware/keyboards/ergodash/rev1/keymaps/ichir0roie/keymapAG.c qmk_firmware/keyboards/ergodash/rev1/keymaps/ichir0roie/ichir0roie_mouse.json