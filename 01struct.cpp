#include<bits/stdc++.h>
using namespace std;

struct node {
    string str;
    int num;
    double doub;
    char x;

    node(str_, num_, doub_, x_){
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
}
    
int main() {

    //* this works but DON'T do like this, use constructor.
    // node sohail;
    // sohail.str = "learning STL";
    // sohail.num = 2412;
    // sohail.doub = 20.20;
    
    node sohail = new node("ahmad", 786, 23.24, "");
    
    return 0; 	
}