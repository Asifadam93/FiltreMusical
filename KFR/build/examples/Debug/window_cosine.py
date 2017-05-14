#!/usr/bin/env python
import dspplot

data = [
                   0,
0.049845885660697156,
0.099567846595816648,
 0.14904226617617444,
 0.19814614319939755,
 0.24675739769029362,
 0.29475517441090415,
 0.34202014332566871,
 0.38843479627469468,
 0.43388373911755812,
 0.47825397862131813,
   0.521435203379498,
 0.56332005806362195,
 0.60380441032547738,
 0.64278760968653925,
 0.68017273777091936,
 0.71586684925971844,
 0.74978120296773398,
 0.78183148246802969,
 0.81193800571585639,
  0.8400259231507714,
  0.8660254037844386,
 0.88987180881146855,
 0.91150585231167303,
 0.93087374864420414,
  0.9479273461671317,
 0.96262424695001203,
 0.97492791218182362,
 0.98480775301220802,
 0.99223920660017206,
 0.99720379718118013,
 0.99968918200081625,
 0.99968918200081625,
 0.99720379718118013,
 0.99223920660017206,
 0.98480775301220802,
 0.97492791218182362,
 0.96262424695001214,
 0.94792734616713181,
 0.93087374864420425,
 0.91150585231167325,
 0.88987180881146877,
 0.86602540378443882,
 0.84002592315077151,
 0.81193800571585673,
 0.78183148246803014,
 0.74978120296773443,
 0.71586684925971855,
 0.68017273777091969,
 0.64278760968653947,
 0.60380441032547771,
 0.56332005806362218,
 0.52143520337949811,
 0.47825397862131847,
 0.43388373911755823,
 0.38843479627469463,
 0.34202014332566888,
  0.2947551744109046,
 0.24675739769029384,
 0.19814614319939758,
 0.14904226617617469,
0.099567846595817161,
0.049845885660697482,
1.2246467991473515e-16,
]
dspplot.plot(data, freqresp=True, dots=True, padwidth=1024, log_freq=False, horizontal=False, normalized_freq=True, title='Cosine window', file='../svg/window_cosine.svg')