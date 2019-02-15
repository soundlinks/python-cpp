#include "zeros.hpp"

#include <iostream>
#include <vector>

using namespace std;

// Should output: 0 0 0 0 0 0 0 0 0 0
void zerosTest()
{
    vector<int> v = ss::zeros(10);

    for (vector<int>::const_iterator i = v.begin(); i != v.end(); i++) {
        cout << *i << ' ';
    }
}

int main ()
{
    zerosTest();

    return 0;
}
