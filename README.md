[Posting Puzzle](https://mame.github.io/posting-puzzle/)

```
$ g++ -O2 -o solver solver.cpp
$ ./solver
stage: 1
numRatio: 2:1:0
max_depth=   3, nodes=           4, time=     0.000
answer: 001

stage: 2
numRatio: 1:1:2
max_depth=   4, nodes=           6, time=     0.000
answer: 2012

stage: 3
numRatio: 3:2:2
max_depth=   7, nodes=           8, time=     0.000
answer: 0200211

stage: 4
numRatio: 1:1:1
max_depth=   3, nodes=           3, time=     0.000
max_depth=   6, nodes=           5, time=     0.000
max_depth=   9, nodes=           9, time=     0.000
max_depth=  12, nodes=          19, time=     0.000
max_depth=  15, nodes=          35, time=     0.000
max_depth=  18, nodes=          63, time=     0.000
max_depth=  21, nodes=         111, time=     0.000
max_depth=  24, nodes=         199, time=     0.000
max_depth=  27, nodes=         345, time=     0.000
max_depth=  30, nodes=         640, time=     0.000
max_depth=  33, nodes=        1162, time=     0.000
max_depth=  36, nodes=        2163, time=     0.000
max_depth=  39, nodes=        3915, time=     0.000
max_depth=  42, nodes=        7299, time=     0.000
max_depth=  45, nodes=       13151, time=     0.001
max_depth=  48, nodes=       24321, time=     0.001
max_depth=  51, nodes=       43754, time=     0.002
max_depth=  54, nodes=       80631, time=     0.005
max_depth=  57, nodes=      144641, time=     0.008
max_depth=  60, nodes=      265239, time=     0.016
max_depth=  63, nodes=      475734, time=     0.029
max_depth=  66, nodes=      871872, time=     0.052
max_depth=  69, nodes=     1566771, time=     0.091
max_depth=  72, nodes=     2870521, time=     0.168
max_depth=  75, nodes=     3025338, time=     0.174
answer: 022001022210002022110101120222201000012102211202101002202121100102111211211

stage: 5
numRatio: 1:2:1
max_depth=   4, nodes=           2, time=     0.000
max_depth=   8, nodes=           3, time=     0.000
max_depth=  12, nodes=           4, time=     0.000
max_depth=  16, nodes=           5, time=     0.000
max_depth=  20, nodes=           6, time=     0.000
max_depth=  24, nodes=           7, time=     0.000
max_depth=  28, nodes=           8, time=     0.000
max_depth=  32, nodes=          12, time=     0.000
max_depth=  36, nodes=          13, time=     0.000
max_depth=  40, nodes=          16, time=     0.000
max_depth=  44, nodes=          24, time=     0.000
max_depth=  48, nodes=          30, time=     0.000
max_depth=  52, nodes=          45, time=     0.000
max_depth=  56, nodes=          58, time=     0.000
max_depth=  60, nodes=          87, time=     0.000
max_depth=  64, nodes=         119, time=     0.000
max_depth=  68, nodes=         187, time=     0.000
max_depth=  72, nodes=         258, time=     0.000
max_depth=  76, nodes=         363, time=     0.000
max_depth=  80, nodes=         494, time=     0.000
max_depth=  84, nodes=         712, time=     0.000
max_depth=  88, nodes=         991, time=     0.000
max_depth=  92, nodes=        1330, time=     0.000
max_depth=  96, nodes=        1805, time=     0.000
max_depth= 100, nodes=        2470, time=     0.001
max_depth= 104, nodes=        3369, time=     0.001
max_depth= 108, nodes=        4499, time=     0.001
max_depth= 112, nodes=        6018, time=     0.001
max_depth= 116, nodes=        8117, time=     0.002
max_depth= 120, nodes=       10946, time=     0.002
max_depth= 124, nodes=       14647, time=     0.003
max_depth= 128, nodes=       19471, time=     0.004
max_depth= 132, nodes=       26062, time=     0.005
max_depth= 136, nodes=       35046, time=     0.007
max_depth= 140, nodes=       46784, time=     0.010
max_depth= 144, nodes=       62063, time=     0.014
max_depth= 148, nodes=       81860, time=     0.018
max_depth= 152, nodes=      108102, time=     0.025
max_depth= 156, nodes=      141174, time=     0.033
max_depth= 160, nodes=      181987, time=     0.043
max_depth= 164, nodes=      230894, time=     0.057
max_depth= 168, nodes=      289831, time=     0.076
max_depth= 172, nodes=      360778, time=     0.084
max_depth= 176, nodes=      441692, time=     0.109
max_depth= 180, nodes=      534415, time=     0.134
max_depth= 184, nodes=      639300, time=     0.158
max_depth= 188, nodes=      760296, time=     0.190
max_depth= 192, nodes=      897180, time=     0.228
max_depth= 196, nodes=     1046023, time=     0.263
max_depth= 200, nodes=     1207602, time=     0.302
max_depth= 204, nodes=     1385859, time=     0.347
max_depth= 208, nodes=     1583280, time=     0.391
max_depth= 212, nodes=     1800180, time=     0.453
max_depth= 216, nodes=     2041467, time=     0.521
max_depth= 220, nodes=     2307862, time=     0.575
max_depth= 224, nodes=     2594439, time=     0.663
max_depth= 228, nodes=     2901982, time=     0.744
max_depth= 232, nodes=     3235475, time=     0.824
max_depth= 236, nodes=     3592865, time=     0.910
max_depth= 240, nodes=     3970791, time=     1.002
max_depth= 244, nodes=     4373605, time=     1.107
max_depth= 248, nodes=     4800837, time=     1.244
max_depth= 252, nodes=     5244878, time=     1.354
max_depth= 256, nodes=     5709856, time=     1.461
max_depth= 260, nodes=     6200734, time=     1.570
max_depth= 264, nodes=     6715292, time=     1.743
max_depth= 268, nodes=     7250737, time=     1.859
max_depth= 272, nodes=     7810538, time=     1.986
max_depth= 276, nodes=     8401072, time=     2.129
max_depth= 280, nodes=     9033134, time=     2.288
max_depth= 284, nodes=     9709580, time=     2.467
max_depth= 288, nodes=    10442069, time=     2.645
max_depth= 292, nodes=    11231750, time=     2.851
max_depth= 296, nodes=    12085112, time=     3.096
max_depth= 300, nodes=    13004832, time=     3.308
max_depth= 304, nodes=    14001915, time=     3.511
max_depth= 308, nodes=    15078768, time=     3.871
max_depth= 312, nodes=    16245830, time=     4.138
max_depth= 316, nodes=    17526719, time=     4.491
max_depth= 320, nodes=    18939949, time=     4.822
max_depth= 324, nodes=    20510332, time=     5.257
max_depth= 328, nodes=    22258591, time=     5.669
max_depth= 332, nodes=    24204352, time=     6.179
max_depth= 336, nodes=    26365367, time=     6.747
max_depth= 340, nodes=    28766241, time=     7.343
max_depth= 344, nodes=    31427973, time=     8.026
max_depth= 348, nodes=    34384394, time=     8.706
max_depth= 352, nodes=    37664353, time=     9.576
max_depth= 356, nodes=    41296675, time=    10.506
max_depth= 360, nodes=    45293205, time=    11.566
max_depth= 364, nodes=    49672946, time=    12.734
max_depth= 368, nodes=    54448655, time=    13.935
max_depth= 372, nodes=    59621223, time=    15.220
max_depth= 376, nodes=    65229573, time=    16.586
max_depth= 380, nodes=    71315381, time=    18.184
max_depth= 384, nodes=    77916516, time=    19.800
max_depth= 388, nodes=    85049028, time=    21.660
max_depth= 392, nodes=    92782609, time=    23.724
max_depth= 396, nodes=   101174948, time=    25.547
max_depth= 400, nodes=   110271903, time=    27.888
max_depth= 404, nodes=   120109821, time=    30.313
max_depth= 408, nodes=   130763962, time=    33.301
max_depth= 412, nodes=   142323007, time=    36.265
max_depth= 416, nodes=   154854487, time=    39.431
max_depth= 420, nodes=   168445831, time=    42.721
max_depth= 424, nodes=   183194825, time=    46.199
max_depth= 428, nodes=   199189377, time=    50.389
max_depth= 432, nodes=   216468961, time=    55.145
max_depth= 436, nodes=   235113403, time=    59.815
max_depth= 440, nodes=   255194552, time=    64.911
max_depth= 444, nodes=   276780186, time=    70.376
max_depth= 448, nodes=   300004228, time=    75.871
max_depth= 452, nodes=   226654212, time=    57.671
answer: 12112121121110112121201211211210111011101120121201212012101121011210112012112012112012101121210111010112012112112012120012101110111010112201120121201212001101101011210112201201200121120110122122011101012011110110120010110120120200120102202120112101211201110101212001122012110112120121121011212112012112111010111011101200121201212020112101122101211201211120111010111012101212001212011201122011221101011011011121200120120110112201010120110120010120200220

stage: 6
numRatio: 2:2:1
max_depth=   5, nodes=          11, time=     0.000
max_depth=  10, nodes=          22, time=     0.000
max_depth=  15, nodes=          34, time=     0.000
max_depth=  20, nodes=          53, time=     0.000
max_depth=  25, nodes=          88, time=     0.000
max_depth=  30, nodes=         148, time=     0.000
max_depth=  35, nodes=         233, time=     0.000
max_depth=  40, nodes=         347, time=     0.000
max_depth=  45, nodes=         516, time=     0.000
max_depth=  50, nodes=         777, time=     0.000
max_depth=  55, nodes=        1147, time=     0.000
max_depth=  60, nodes=        1672, time=     0.000
max_depth=  65, nodes=        2457, time=     0.000
max_depth=  70, nodes=        3657, time=     0.000
max_depth=  75, nodes=        5496, time=     0.000
max_depth=  80, nodes=        8272, time=     0.000
max_depth=  85, nodes=       12389, time=     0.001
max_depth=  90, nodes=       18573, time=     0.001
max_depth=  95, nodes=       28007, time=     0.001
max_depth= 100, nodes=       42293, time=     0.002
max_depth= 105, nodes=       63688, time=     0.003
max_depth= 110, nodes=       95742, time=     0.005
max_depth= 115, nodes=      143987, time=     0.007
max_depth= 120, nodes=      216676, time=     0.011
max_depth= 125, nodes=      325984, time=     0.016
max_depth= 130, nodes=      489744, time=     0.024
max_depth= 135, nodes=      734443, time=     0.036
max_depth= 140, nodes=     1100928, time=     0.054
max_depth= 145, nodes=     1651641, time=     0.084
max_depth= 150, nodes=     2477645, time=     0.130
max_depth= 155, nodes=     3711493, time=     0.194
max_depth= 160, nodes=     5554903, time=     0.289
max_depth= 165, nodes=     8316945, time=     0.434
max_depth= 170, nodes=    12454968, time=     0.642
max_depth= 175, nodes=    18639036, time=     0.964
max_depth= 180, nodes=    27877048, time=     1.445
max_depth= 185, nodes=    41702544, time=     2.121
max_depth= 190, nodes=    62409080, time=     3.223
max_depth= 195, nodes=    93386585, time=     4.811
max_depth= 200, nodes=   139692116, time=     7.196
max_depth= 205, nodes=   208948681, time=    10.763
max_depth= 210, nodes=   312606003, time=    16.115
max_depth= 215, nodes=   467731425, time=    24.082
max_depth= 220, nodes=   699776052, time=    36.700
max_depth= 225, nodes=  1046886966, time=    54.718
max_depth= 230, nodes=  1566321141, time=    81.032
max_depth= 235, nodes=  2343800209, time=   122.246
max_depth= 240, nodes=  3507453597, time=   182.188
max_depth= 245, nodes=  5248998281, time=   272.584
^C
```
