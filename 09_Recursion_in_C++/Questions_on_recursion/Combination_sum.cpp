#include <bits/stdc++.h>
using namespace std;

void combination(vector<int> ans, int arr[], int n, int k, int idx)
{
    if(k<0) return;
    if(k==0)
    {
        // v.push_back(ans);
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    for (int i = idx; i < n; i++)
    {
        ans.push_back(arr[i]);
        combination(ans, arr, n, k-arr[i],i);
        ans.pop_back();
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

    int k;
    cout<<"Enter a target: ";
    cin>>k;
    vector<int> ans;

    combination(ans, arr, n, k, 0);


    return 0;
}