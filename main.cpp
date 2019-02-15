#include "abs.hpp"
#include "append.hpp"
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

    cout << '\n';
}

// Should output: 10 20 30
void appendTest()
{
    vector<int> v;

    v = ss::append(v, 10);
    v = ss::append(v, 20);
    v = ss::append(v, 30);

    for (vector<int>::const_iterator i = v.begin(); i != v.end(); i++) {
        cout << *i << ' ';
    }

    cout << '\n';
}

// Should output: 1 2 3 4 5
void absTest()
{
    // We don't support C++11
    static const int arr[] = {1, -2, 3, -4, 5};
    vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]));

    v = ss::abs(v);

    for (vector<int>::const_iterator i = v.begin(); i != v.end(); i++) {
        cout << *i << ' ';
    }

    cout << '\n';
}

int main ()
{
    zerosTest();
    appendTest();
    absTest();

    return 0;
}
