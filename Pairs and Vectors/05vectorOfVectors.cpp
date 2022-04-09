#include <bits/stdc++.h>
using namespace std;

// No. of rows and cols both are dynamic.

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
    vector<vector<int> > v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the number of elements for vector " << i + 1 << ": ";
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }

    return 0;
}