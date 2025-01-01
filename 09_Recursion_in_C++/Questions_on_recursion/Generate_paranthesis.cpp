#include <bits/stdc++.h>
using namespace std;

void paran(string s,int n, vector<string> &v, int open, int close)
{
    if(close == n)
    {
        v.push_back(s);
        return;
    }
    if(open>close) 
    {
        paran(s+')', n, v, open, close+1);
    }
    if(open < n)
    {
        paran(s+'(', n, v, open+1, close);
    }

}
int main()
{
    system("clear");
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<string> v;
    int open,noo;

    paran("",n,v,0,0);

    for (string ele: v)
    {
        cout<<ele<<endl;
    }
    
    return 0;
}