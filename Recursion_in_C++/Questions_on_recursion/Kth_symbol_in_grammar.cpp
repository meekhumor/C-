#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

// Memory Limit Exceeded

void generate(vector<int> &ans, int n, int k, int idx)
{
    if(n == 1) 
    {
        cout<<0;
        return;
    }
    if(idx == n)
    {
        cout<<ans[k-1];
        return;
    }
    for (int i = 0; i < pow(2,idx); i++)
    {
        if(ans[i] == 0) ans.push_back(1);
        if(ans[i] == 1) ans.push_back(0);
    }
    generate(ans, n, k, idx+1);
    
}

int main()
{
    system("cls");
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int k;
    cout<<"Enter k: ";
    cin>>k;

    vector<int> ans;
    ans.push_back(0);
    generate(ans,n,k,0);
    
    return 0;
}