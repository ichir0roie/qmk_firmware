# all one

<!-- mv Downloads/ichir0roie_7skb.json qmk_firmware/myJsons/ichir0roie_7skb.json;3 -->
qmk json2c -o keyboards/7skb/keymaps/ichir0roie/keymapAG.c myJsons/ichir0roie_7skb.json;
qmk flash -kb 7skb/rev1 -km ichir0roie

# flash

qmk flash -kb 7skb/rev1 -km ichir0roie
