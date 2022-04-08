#include <bits/stdc++.h>
using namespace std;

int LSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

/*
* 1. If the element is not present in the array:
Best, worst, average complexity = O(n);
* 2. If the element is present in the array:
Best case: beg of the array --> one comparison --> O(1)
Worst case: at the end of the array --> n comparison --> O(n)
Average case: half way --> O(n/2) = O(n).
*/

int main()
{
    int arr[] = {1, 75, 12, 42, 11, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 11;
    int result = LSearch(arr, n, x);

    (result == -1) ? cout << "Element not found"
                   : cout << "Element found at index: " << result;

    return 0;
}