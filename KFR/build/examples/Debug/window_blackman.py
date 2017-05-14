#!/usr/bin/env python
import dspplot

data = [
-1.3877787807814457e-17,
0.00089841134518278687,
0.0036318530253606762,
0.0083126990522091881,
0.015120839511681999,
0.024292914424146474,
0.036107894791314148,
0.050869632653865356,
0.068887135617917747,
0.090453424354128037,
 0.11582389981667129,
 0.14519517754463529,
 0.17868533807041631,
 0.21631649539792497,
 0.25800050150366211,
 0.30352848710877756,
 0.35256479217152253,
 0.40464566942541619,
 0.45918295754596367,
 0.51547272454800841,
 0.57270868455755697,
 0.62999999999999978,
 0.68639290409725995,
 0.74089542242663076,
 0.79250434340182696,
 0.84023349106290146,
  0.8831422934043307,
 0.92036361809990808,
 0.95112986584247239,
 0.97479636898415722,
 0.99086123757545552,
  0.9989809226386932,
 0.99898092263869331,
 0.99086123757545563,
 0.97479636898415734,
 0.95112986584247239,
  0.9203636180999083,
 0.88314229340433104,
 0.84023349106290179,
 0.79250434340182696,
 0.74089542242663109,
 0.68639290409726061,
 0.63000000000000023,
 0.57270868455755708,
 0.51547272454800863,
 0.45918295754596428,
 0.40464566942541669,
 0.35256479217152276,
 0.30352848710877794,
 0.25800050150366227,
 0.21631649539792536,
 0.17868533807041653,
 0.14519517754463535,
 0.11582389981667153,
 0.09045342435412812,
0.068887135617917761,
0.050869632653865411,
0.036107894791314238,
0.024292914424146515,
0.015120839511681992,
0.0083126990522092437,
0.0036318530253607317,
0.0008984113451828285,
-1.3877787807814457e-17,
]
dspplot.plot(data, freqresp=True, dots=True, padwidth=1024, log_freq=False, horizontal=False, normalized_freq=True, title='Blackman window', file='../svg/window_blackman.svg')