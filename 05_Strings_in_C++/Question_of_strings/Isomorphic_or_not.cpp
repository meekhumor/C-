#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    vector<int> v(150, 1000);
    if(s.length()!= t.length()) return 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (v[(int)s[i]]==1000)
        {
            v[(int)s[i]]=(int)s[i]-(int)t[i];
        }
        else if(v[(int)s[i]]!=(int)s[i]-(int)t[i])
        {
            return 0;
        }
    }
    for(int i=0; i<150; i++)
    {
        v[i] = 1000;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (v[(int)t[i]]==1000)
        {
            v[(int)t[i]]=(int)t[i]-(int)s[i];
        }
        else if(v[(int)t[i]]!=(int)t[i]-(int)s[i])
        {
            return 0;
        }
    }

    return 1;   
}

int main()
{
    system("clear");
    string s,t;
    cout<<"Enter first string: ";
    getline(cin,s);

    cout<<"Enter second string: ";
    getline(cin,t);

    isIsomorphic(s,t);
    
    return 0;
}