#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    map<int,int> m;
    m[2] = 20;
    m[1] = 30;
    m[3] = 10;
    for(auto x : m)
    {
        cout<<x.first<<" "; // sorted output according to key
    }
    return 0;
}