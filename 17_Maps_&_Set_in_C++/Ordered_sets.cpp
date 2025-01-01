#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(7);
    for(int ele: s){
        cout<<ele<<" "; // sorted output
    }
    return 0;
}