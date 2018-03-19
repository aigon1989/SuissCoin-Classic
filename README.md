Swisscoin-Classic
===========

Swisscoin-Classic (SCC) is a decentralised open source digital currency.

 - advanced hybrid proof-of-work (PoW) and proof-of-stake (PoS)
 - 5 bilion coins to be produced
 - block hashing is BLAKE2s
 - PoW hashing is NeoScrypt
 - PoS hashing is SHA-256d
 - 1 minute combined block target (1.5 minutes for PoW, 3 minutes for PoS)
 - retargets every block using Orbitcoin Super Shield (OSS)
 - time warp and instamining protection
 - advanced checkpointing against 51% attacks
 - transaction messaging supported
 - PoW and PoS blocks carry the same fixed reward of 100 SCC
 - 6 confirmations for regular transactions
 - 200 confirmations for minted coins
 - very low transaction fees (most transactions are free)
 - no destruction of transaction fees (all collected by a block finder)
 - the default P2P port is 30915, RPC port is 30914
 - I2P/Tor ready


Download
--------

Please visit https://github.com/Swisscoin-Classic/Swisscoin-Classic/releases or
http://swisscoin-classic.com if you need pre-compiled binaries.


Support
-------

See https://bitcointalk.org/index.php?topic=2140812.0 if you need advice.

Block Explorer
--------------
http://5.135.66.120:3001

Solo Mining
-----------
Define a "swisscoin-classic.conf" file into data folder (~/.swisscoin-classic on Linux, C:\Users\<your_user_name>\AppData\Roaming\swisscoin-classic on Windows) with the following values:
server=1
rpcport=30914
rpcuser=user
rpcpassword=password

Then, download and compile cgminer (for gpu mining) or cpuminer (for cpu mining) and run:

./cgminer -a neoscrypt -o 127.0.0.1:30914 -u user -p password
or
./cpuminer -a neoscrypt -o 127.0.0.1:30914 -u user -p password


