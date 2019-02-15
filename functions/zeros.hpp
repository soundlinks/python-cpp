// C++ implementation of numpy.zeros
// https://docs.scipy.org/doc/numpy/reference/generated/numpy.zeros.html

#include <iostream>
#include <vector>

using namespace std;

namespace ss
{
    vector<int> zeros(uint size);

    vector<int> zeros(uint size)
    {
        vector<int> v (size, 0);

        return v;
    }
}
