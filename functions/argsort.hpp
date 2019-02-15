// C++ implementation of numpy.argsort
// https://docs.scipy.org/doc/numpy/reference/generated/numpy.argsort.html

#include <vector>    // std::vector
#include <algorithm> // std::generate std::sort

using namespace std;

namespace ss
{
    vector<int> argsort(vector<int> v);

    vector<int> argsort(vector<int> v)
    {
        vector<int> idx(v.size());
        size_t n(0);
        generate(idx.begin(), idx.end(), [&]{ return n++; });

        sort(idx.begin(), idx.end(),
                    [&](int i1, int i2) { return v[i1] < v[i2]; } );
        return idx;
    }
}