# 7skb

<!-- mv Downloads/ichir0roie_7skb.json qmk_firmware/myJsons/ichir0roie_7skb.json;3 -->
qmk json2c -o keyboards/7skb/keymaps/ichir0roie/keymapAG.c myJsons/ichir0roie_7skb.json;
qmk flash -kb 7skb/rev1 -km ichir0roie

qmk json2c -o keyboards/7skb/keymaps/ichir0roie/keymapAG.c myJsons/ichir0roie_7skb.json;qmk flash -kb 7skb/rev1 -km ichir0roie



# ergoarrows

<!-- mv Downloads/ichir0roie_7skb.json qmk_firmware/myJsons/ichir0roie_7skb.json;3 -->

qmk json2c -o keyboards/ergoarrows/keymaps/ichir0roie/keymapAG.c myJsons/ichir0roie_ergoarrows.json;
qmk flash -kb ergoarrows -km ichir0roie

qmk json2c -o keyboards/ergoarrows/keymaps/ichir0roie/keymapAG.c myJsons/ichir0roie_ergoarrows.json;qmk flash -kb ergoarrows -km ichir0roie


# ploopyco

qmk flash -kb ploopyco/trackball_thumb/dragKeep -km ichir0roie
