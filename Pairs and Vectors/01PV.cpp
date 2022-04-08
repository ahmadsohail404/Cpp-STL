#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            cout << "Not Prime" << endl;
            return 0;
        }
        else
        {
            cout << "Prime" << endl;
            return 0;
        }
    }
}
