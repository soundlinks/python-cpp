// C++ implementation of numpy.argmax
// https://docs.scipy.org/doc/numpy/reference/generated/numpy.argmax.html

#include <vector>    // std::vector

using namespace std;

namespace ss
{
    int argmax(vector<int> v);

    int argmax(vector<int> v)
    {
        int nSize = (int)v.size();
        int maxIndex = nSize - 1;

        for (int i = (nSize - 1); i >= 0; --i)
        {
            if (v[maxIndex] <= v[i])
            {
                maxIndex = i;
            }
        }
        return maxIndex;
    }
}