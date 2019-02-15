#include <iostream>
#include <vector>

using namespace std;

namespace ss
{
    void printVectorInteger(vector<int> v);

    void printVectorInteger(vector<int> v)
    {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << ' ';
        }

        cout << '\n';
    }
}
