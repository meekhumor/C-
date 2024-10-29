#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    unordered_map<string, int> m;
    pair<string, int> p1;
    p1.first = "Om";
    p1.second = 76;
    m.insert(p1);

    pair<string, int> p2;
    p2.first = "Hello";
    p2.second = 23;
    m.insert(p2);

    // another way to insert
    m["Lokesh"] = 34;
    m["Rahul"] = 35;
    
    for (auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    // for (pair<string,int> p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    return 0;
}
