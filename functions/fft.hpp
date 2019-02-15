#include <complex>
#include <iostream>
#include <valarray>

using namespace std;

const double PI = 3.141592653589793238460;

typedef complex<double> Complex;
typedef valarray<Complex> CArray;

namespace ss
{
    // Cooley–Tukey FFT (in-place, divide-and-conquer)
    void fft(CArray &x)
    {
        const size_t N = x.size();
        if (N <= 1) return;

        // divide
        CArray even = x[slice(0, N/2, 2)];
        CArray  odd = x[slice(1, N/2, 2)];

        // conquer
        fft(even);
        fft(odd);

        // combine
        for (size_t k = 0; k < N/2; ++k) {
            Complex t = polar(1.0, -2 * PI * k / N) * odd[k];
            x[k    ] = even[k] + t;
            x[k+N/2] = even[k] - t;
        }
    }
}

