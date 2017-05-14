# KFR - Fast, modern C++ DSP framework

[![Build Status](https://travis-ci.org/kfrlib/kfr.svg?branch=master)](https://travis-ci.org/kfrlib/kfr)

https://www.kfrlib.com

What's new in release 1.0 - https://www.kfrlib.com/whatsnew

KFR is an open source C++ DSP framework that focuses on high performance (see benchmark results section).

KFR is a header-only and has no external dependencies.

## Features

* All code in the library is optimized for Intel, AMD (SSE2, SSE3, SSE4.x, AVX and AVX2) and ARM (NEON) processors
* Mathematical and statistical functions
* Template expressions (See examples)
* All data types are supported including complex numbers
* All vector lengths are also supported. `vec<float,1>`, `vec<unsigned,3>`, `vec<complex<float>, 11>` all are valid vector types in KFR
* Most of the standard library functions are re-implemented to support vector of any length and data type
* Runtime cpu detection


## Benchmark results
### FFT

FFT (double precision, sizes from 1024 to 16777216)
See [fft benchmark](https://github.com/kfrlib/fft-benchmark) for details about benchmarking process.

![FFT Performance](img/fft_performance.png)

### Biquad

[Biquad performance](https://github.com/kfrlib/biquad-benchmark/blob/master/bq.svg)
    
## Prerequisites

* macOS: XCode 6.3, 6.4, 7.x, 8.x
* Windows
  * MinGW 5.2 and Clang 3.7 or newer (MinGW 4.8 is also supported, but MinGW 5.x is recommended)
  * Visual Studio 2015 update 2 and latest Clang 3.9.0
* Ubuntu: GCC 5.1 and Clang 3.7 or newer
* CoMeta metaprogramming library (already included)

KFR is a header-only so just `#include <kfr/math.hpp>` to start using it

The following tools are required to build the examples:

* CMake 2.8 or newer

To build the tests:

* Testo - C++14 testing micro framework (included)
* Python 2.7 with the following modules:

  * dspplot (included, see Installation)
  * matplotlib
  * numpy
  * scipy

## Installation

To obtain the full code, including examples and tests, you can clone the git repository:

```
git clone https://github.com/kfrlib/kfr.git
```

To be able to run the tests and examples install the following python modules:

```
pip install matplotlib # or download prebuilt package for windows
pip install numpy # or download prebuilt package for windows
pip install scipy # or download prebuilt package for windows
```
Install dspplot using `python setup.py install` inside dspplot directory


## Planned for future versions

* DFT for any lengths (not only powers of two)
* Parallel execution of algorithms
* Serialization/Deserialization of any expression
* More formats for audio file reading/writing
* Reduce STL dependency

## License

KFR is dual-licensed, available under both commercial and open-source GPL license.

If you want to use KFR in commercial product or a closed-source project, you need to [purchase a Commercial License](https://kfrlib.com/purchase-license)
