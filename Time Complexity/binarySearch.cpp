#include <bits/stdc++.h>
using namespace std;

int BSearch(int arr[], int x, int l, int r)
{
    while (l <= r)
    {
        int m = (l + r) / 2;

        if (arr[m] == x)
            return m;
        else if (arr[m] < x)
            l += 1;
        else
            r += 1;
    }
    return -1;
}

/*
Best case: middle -> one comparison -> O(1).
Worst case: start or end -> O(n/2^k) = O(log(n)). || k = number of comparison.

*/

int main()
{
    int arr[] = {43, 11, 23, 76, 85, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 85;
    int result = BSearch(arr, x, 0, n - 1);

    (result == -1) ? cout << "Element not found"
                   : cout << "Element found at index: " << result;

    return 0;
}