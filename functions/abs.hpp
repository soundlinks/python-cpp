// C++ implementation of numpy.absolute
// https://docs.scipy.org/doc/numpy-1.15.1/reference/generated/numpy.absolute.html
// np.abs is a shorthand for np.absolute.

#include <iostream>
#include <vector>

using namespace std;

namespace ss
{
    vector<int> abs(vector<int> v);

    vector<int> abs(vector<int> v)
    {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] < 0) {
                v[i] = -1 * v[i];
            }
        }

        return v;
    }
}
