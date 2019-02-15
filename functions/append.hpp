// C++ implementation of numpy.append
// https://docs.scipy.org/doc/numpy/reference/generated/numpy.append.html

#include <iostream>
#include <vector>

using namespace std;

namespace ss
{
    // For integer
    vector<int> append(vector<int> v, int el);

    vector<int> append(vector<int> v, int el)
    {
        v.push_back(el);

        return v;
    }
}
