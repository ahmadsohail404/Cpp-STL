#include <bits/stdc++.h>
using namespace std;
// cpp has taken all its functions and put in std namespace

namespace sohail
{
    int val = 10;
    int getVal()
    {
        return val * 10;
    }
}

int main()
{
    double val = 50.0;
    cout << val << endl;              // std::cout -> 50
    cout << sohail::getVal() << endl; // -> 10

    return 0;
}