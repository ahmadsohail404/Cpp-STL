/*
Given T testcases and an array of size N.
Print sum of array in each test case.
* Constraints:
1 <= T <= 1000
1 <= N <= 1000
1 <= a[i] <= 1000
Sum of N over all test cases is < 10^7
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ct = 0;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int x;
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            sum += x;
            ct++;
        }
        cout << sum << endl;
    }

    return 0;
}

// if last constraint is not considered:
//* O(T * N) = O(N^2) = 10^6 --> it'll not throw TLE in online competitive compilers.
// if last constraint is considered:
//* O(ct) = O(10^7)