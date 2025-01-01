#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main()
{
    system("clear");

    int n;
    cout<<"Enter size of an array: ";
    cin>>n;

    vector<int> v;
    cout<<"Enter any "<<n<<" numbers: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    

    vector<int> t(v.size(),0);

    int x = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int midx = -1;
        int min = INT8_MAX;
        for (int j = 0; j < v.size(); j++)
        {
            if(t[j]==1) continue;
            else
            {
                if(v[j]<min) 
                {
                    min = v[j];
                    midx = j;
                }
            }
        }
        v[midx] = x;
        t[midx] = 1;
        x++;        
    }

    display(v);
    
    
    return 0;
}