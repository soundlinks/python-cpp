// C++ implementation of numpy.sum
// https://docs.scipy.org/doc/numpy/reference/generated/numpy.sum.html

#include <iostream>
#include <vector>

using namespace std;

namespace ss
{
    int sum(vector<int> v);

    int sum(vector<int> v)
    {
        int s = 0;

        for (int i = 0; i < v.size(); i++) {
            s += v[i];
        }

        return s;
    }
}
