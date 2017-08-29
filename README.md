HomaCoin
================================

http://www.homacoin.com

CoinInfo
-------
Algo: SHA256
Block Time: 25 min
R-Block: 25 HOMA

Testing
-------

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake HOMACOIN_QT_TEST=1 -o Makefile.test homacoin-qt.pro
    make -f Makefile.test
    ./homacoin-qt_test
