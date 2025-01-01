#include <bits/stdc++.h>
using namespace std;

void subarray(vector<int> v, int arr[], int n, int idx)
{
    if(idx == n)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        return;
        
    }
    subarray(v, arr, n, idx+1);
    if(v.size()==0 || arr[idx-1] == v[v.size()-1])
    {
        v.push_back(arr[idx]);
        subarray(v, arr, n, idx+1);
    }
    
}
int main()
{
    system("clear");
    int  n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    vector<int> v;
    subarray(v,arr,n,0);
    
    return 0;
}