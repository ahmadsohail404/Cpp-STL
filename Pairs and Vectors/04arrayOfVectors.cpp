#include <bits/stdc++.h>
using namespace std;

// No. of col dynamic but no. of rows is not.

void printVec(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cout << "Enter the number of vectors: ";
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the number of elements for vector " << i + 1 << ": ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    return 0;
}