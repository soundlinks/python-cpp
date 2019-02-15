// C++ implementation of numpy.delete
// https://docs.scipy.org/doc/numpy/reference/generated/numpy.delete.html

#include <iostream>
#include <vector>

using namespace std;

namespace ss
{
    vector<int> remove(vector<int> v, int index);

    vector<int> remove(vector<int> v, int index)
    {
        if (index < 0 || index >= v.size()) {
            return v;
        }

        v.erase(v.begin() + index);

        return v;
    }
}
