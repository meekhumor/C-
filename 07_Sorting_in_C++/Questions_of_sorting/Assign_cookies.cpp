#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    int count = 0;
    vector<int> m(g.size(),0);
    vector<int> n(s.size(),0);
    for (int i = 0; i < g.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if(m[i]==0 && n[j]==0)
            {
                if(s[j]>=g[i])
                { 
                    m[i]++;
                    n[j]++;
                    count++;
                }
            }
            if(count==g.size()) cout<<count;
        }
    }
    cout<<count;
}
    


int main()
{
    system("clear");

    int gs;
    cout<<"Enter size of greed aray: ";
    cin>>gs;

    vector<int> g;
    cout<<"Enter any "<<gs<<" numbers in greed array: ";
    for (int i = 0; i < gs; i++)
    {
        int x;
        cin>>x;
        g.push_back(x);
    }

    int ss;
    cout<<"Enter size of size aray: ";
    cin>>ss;

    vector<int> s;
    cout<<"Enter any "<<ss<<" numbers in size array: ";
    for (int i = 0; i < ss; i++)
    {
        int x;
        cin>>x;
        s.push_back(x);
    }

    findContentChildren(g,s);
    
    return 0;
}