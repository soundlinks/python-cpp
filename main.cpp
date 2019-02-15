#include "abs.hpp"
#include "append.hpp"
#include "mean.hpp"
#include "remove.hpp"
#include "sum.hpp"
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

void appendTest()
{
    cout << "tesing function append, should output: 1 2 3\n";

    vector<int> v;

    v = ss::append(v, 1);
    v = ss::append(v, 2);
    v = ss::append(v, 3);

    ss::printVectorInteger(v);
}

void absTest()
{
    cout << "tesing function abs, should output: 1 2 3 4 5\n";

    // We don't support C++11
    static const int arr[] = {1, -2, 3, -4, 5};
    vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]));

    v = ss::abs(v);

    ss::printVectorInteger(v);
}

void sumTest()
{
    cout << "tesing function sum, should output: 15\n";

    // We don't support C++11
    static const int arr[] = {1, 2, 3, 4, 5};
    vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]));

    int s = ss::sum(v);

    cout << s << '\n';
}

void meanTest()
{
    cout << "tesing function mean, should output: 3\n";

    // We don't support C++11
    static const int arr[] = {1, 2, 3, 4, 5};
    vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]));

    int m = ss::mean(v);

    cout << m << '\n';
}

void removeTest()
{
    cout << "tesing function remove, should output: 2 3 4 5\n";

    // We don't support C++11
    static const int arr[] = {1, 2, 3, 4, 5};
    vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]));

    vector<int> r = ss::remove(v, 0);

    ss::printVectorInteger(r);
}

int main ()
{
    zerosTest();
    appendTest();
    absTest();
    sumTest();
    meanTest();
    removeTest();

    return 0;
}
