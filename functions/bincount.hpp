// C++ implementation of numpy.bincount
// https://docs.scipy.org/doc/numpy/reference/generated/numpy.bincount.html

#include <vector>    // std::vector

using namespace std;

namespace ss
{
    vector<int> bincount(vector<int> v);

    vector<int> bincount(vector<int> v)
    {
        vector<int> bins;
        int maxValue = 0;
        
        maxValue = *max_element(v.begin(), v.end());

        int binsCount = maxValue + 1;

        for (int i = 0; i < binsCount; ++i)
        {
            int bin = static_cast<int>(count(v.begin(), v.end(), i));
            bins.push_back(bin);
        }

        return bins;
    }
}