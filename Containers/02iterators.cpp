#include<bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    freopen("../error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //* begin(), end(), rbegin(), rend().
    // end() -> it's not the last but just after the last pointing to empty address.
    // rbegin() -> the last element.
    // rend() -> just before the start.

    array<int, 5> arr = {11,22,33,44,55};

    for(auto it=arr.begin(); it<arr.end(); it++) {
        cout<< *it <<" ";
    }
    cout<<endl;

    for(auto it=arr.rbegin(); it<arr.rend(); it++) {
        cout<< *it <<" ";
    }
    cout<<endl;

    for(auto it: arr){  //* it's a forward iterator
        cout << it<<" ";
    }
    cout<<endl;

    string s = "abcdefgh";  // a b c d e f g h
    for(auto it: s){
        cout< it <<" ";
    }

    // first element
    arr.front();
    // last element
    arr.back();

    //* iterating over vector of vectors.
    vector<vector<int>> vec;
    for(auto vctr: vec){
        for(auto it: vctr){
            cout << it<<" ";
        }
        cout<<endl;
    }

    // define 10 x 20
    vector<vector<int>> vec(10, vector<int> (20,0));
    // 10 vectors with 20 length each.
    for(auto vctr: vec){
        for(auto it: vctr){
            cout << it<<" ";
        }
        cout<<endl;
    }

    // array of 4 vectors.
    vector<int> arr[4]; // array is not dynamic.

    // 3D vector --> 10 x 20 x 30
    vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20, vector<int> (30,0)))
    



    
    return 0; 	
}