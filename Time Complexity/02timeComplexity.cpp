#include <bits/stdc++.h>
using namespace std;

//* N < 10^5

int main()
{
    int ct = 0;
    int n;
    cin >> n;

    while (n > 0)
    {
        n /= 2;
        ct++;
    }
}

/*
* O(3) + O(log(n)) = O(log(n))
2^a = n --> for terminating the loop, we divide it by n by 2 a nunmber of times.

log(10^5)  --> base 2
= 5 log(10) = 15. even if n is 10^5, this loop will run 15 times only.
* GOOD COMLEXITY.


*/