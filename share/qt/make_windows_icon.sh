#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/homacoin.png
ICON_DST=../../src/qt/res/icons/homacoin.ico
convert ${ICON_SRC} -resize 16x16 homacoin-16.png
convert ${ICON_SRC} -resize 32x32 homacoin-32.png
convert ${ICON_SRC} -resize 48x48 homacoin-48.png
convert homacoin-16.png homacoin-32.png homacoin-48.png ${ICON_DST}

