#include <bits/stdc++.h>
using namespace std;


void print(int arr[], int n, int idx, vector<int> ans, int k)
{
    if(idx==n)
    {
        if(ans.size() == k)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    print(arr, n, idx+1, ans, k);
    ans.push_back(arr[idx]);
    print(arr, n, idx+1, ans, k);
}

int main()
{
    system("clear");
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int k = 3;
    cout<<"Enter k: ";
    cin>>k;
    vector<int> v;
    print(arr, n, 0, v, k);
    
    return 0;
}
