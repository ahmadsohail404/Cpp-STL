#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ct = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            ct++;
        }
    }
}

/*

observing inner loop for outer loop run:
* O(1)+O(2)+O(3)+...O(n) = O( n(n+1)/2 ) = n^/2 + n/2 = O(n^2)
*

*/