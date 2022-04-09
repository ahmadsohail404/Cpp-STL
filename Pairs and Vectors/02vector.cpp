#include <bits/stdc++.h>
using namespace std;

// VECTORS
// in a locally declared vector/array --> 10^5 order elements.
// in a declared vector/array --> 10^7 order elements.

void printVec(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v; // it can take any datatype, pair, containers, etc.
    // vector<pair<int, int> > v1; // vector of pair.

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
        printVec(v);
    }

    // v.push_back(1), v.size() --> O(1) complexity like array. --> pushes at the end.

    vector<int> v1(5);                  //* we can also declare size of vector but it still expands.
    for (int i = 0; i < v1.size(); ++i) // assigns 0 to each index.
    {
        cout << v1[i] << " ";
    }

    //* vector<int> v(10, 3); --> 10 size vector with each element = 3.
    //* v.pop_back() --> removes the last element of the vector.

    //* vector<int> v1 = v2; --> O(n) complexity, copies directly UNLIKE arrays

    // pass vectors as a reference for avoiding copy making as argument in a function.

        return 0;
}