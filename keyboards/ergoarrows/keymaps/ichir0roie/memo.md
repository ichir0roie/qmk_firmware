# all one

<!-- mv Downloads/ichir0roie_7skb.json qmk_firmware/myJsons/ichir0roie_7skb.json;3 -->
qmk json2c -o keyboards/ergoarrows/keymaps/ichir0roie/keymapAG.c myJsons/ichir0roie_ergoarrows.json;
qmk flash -kb ergoarrows -km ichir0roie
