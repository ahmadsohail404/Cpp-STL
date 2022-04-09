#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int> > &v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    cout << endl;
}

int main()
{
    vector<pair<int, int> > v;

    // for input:
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y}); // or we can use v.push_back(make_pair(x,y));
    }
    printVec(v);

    return 0;
}