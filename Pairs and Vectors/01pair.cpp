#include <bits/stdc++.h>
using namespace std;

// pairs are used to maintain relation between two things.

int main()
{
    pair<int, string> p; // it can take any two values be it datatypes or containers.
    // p = make_pair(5, "Sohail");         // make_pair is used to make a pair and pass arguments.

    // for input --> cin>>p.first;

    p = {5, "I'm the in p"};                    // easy way to make pair.
    cout << p.first << " " << p.second << "\n"; // a pair is accessed this way.

    pair<int, string> p1 = p; // making a copy.
    p1.first = 120;
    cout << p1.first << "\n"; // relax boiz, only p1 changes but p doesn't.

    pair<int, string> &p2 = p;
    p2.second = "I'm in p2";
    cout << p.second << "\n"; //* used & and p also changes because taking reference.

    //* ARRAY
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]); // swapping first the last array.

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << "\n";
    }
}
