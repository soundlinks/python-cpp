// C++ implementation of numpy.mean
// https://docs.scipy.org/doc/numpy/reference/generated/numpy.mean.html

#include <iostream>
#include <vector>

using namespace std;

namespace ss
{
    float mean(vector<int> v);

    float mean(vector<int> v)
    {
        int s = 0;

        for (int i = 0; i < v.size(); i++) {
            s += v[i];
        }

        return (float)s / v.size();
    }
}
