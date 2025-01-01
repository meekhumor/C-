#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if(strs.size()==1) return strs[0];
    sort(strs.begin(),strs.end());

    string first = strs[0];
    string last = strs[strs.size()-1];

    int count = 0;
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if(first[i]==last[i]) count++;
        else break;
    }

    string s;
    for (int i = 0; i < count; i++)
    {
        s.push_back(first[i]);
    }
    
    return s;
    
}

int main()
{
    system("clear");
    int t;
    cout<<"Enter no. of strings: ";
    cin>>t;

    vector<string>v;
    cout<<"Enter any "<<t<<" strings: \n";
    for (int i = 0; i < t; i++)
    {
        string si;
        getline(cin,si);
        v.push_back(si);
    }
    longestCommonPrefix(v);
    return 0;
}