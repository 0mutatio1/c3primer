#include <string>
#include <iostream>
#include <vector>

using namespace std;

// returns 0 if the values are equal, -1 if v1 is smaller, 1 if v2 is smaller
int compare(const string& v1, const string& v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int compare(const double& v1, const double& v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

template <typename T>
int compare(const T& v1, const T& v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

void _1() {
    // instantiates int compare(const int&, const int&)
    cout << compare(1, 0) << endl;       // T is int
    // instantiates int compare(const vector<int>&, const vector<int>&)
    vector<int> vec1{ 1, 2, 3 }, vec2{ 4, 5, 6 };
    cout << compare(vec1, vec2) << endl; // T is vector<int>
}