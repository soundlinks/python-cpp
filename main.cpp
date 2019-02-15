#include "abs.hpp"
#include "append.hpp"
#include "utils.hpp"
#include "zeros.hpp"

#include <iostream>
#include <vector>

using namespace std;

void zerosTest()
{
    cout << "tesing function zeros, should output: 0 0 0 0 0\n";

    vector<int> v = ss::zeros(5);

    ss::printVectorInteger(v);
}

// Should output: 10 20 30
void appendTest()
{
    cout << "tesing function append, should output: 1 2 3\n";

    vector<int> v;

    v = ss::append(v, 1);
    v = ss::append(v, 2);
    v = ss::append(v, 3);

    ss::printVectorInteger(v);
}

// Should output: 1 2 3 4 5
void absTest()
{
    cout << "tesing function abs, should output: 1 2 3 4 5\n";

    // We don't support C++11
    static const int arr[] = {1, -2, 3, -4, 5};
    vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]));

    v = ss::abs(v);

    ss::printVectorInteger(v);
}

int main ()
{
    zerosTest();
    appendTest();
    absTest();

    return 0;
}
