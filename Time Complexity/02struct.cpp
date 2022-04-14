#include <bits/stdc++.h>
using namespace std;

struct node
{
    string str;
    int num;
    double doub;
    char x;

    node(string str_, int num_, double doub_, char x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

int main()
{
    // --> below is a BAD WAY of defining, instead create a constructor.

    // node ahmad;
    // ahmad.str = "Sohail";
    // ahmad.num = 7061;
    // ahmad.doub = 24.12;

    node ahmad = new node("Sohail", 7061, 24.12, "");

    cout << ahmad.str;

    return 0;
}