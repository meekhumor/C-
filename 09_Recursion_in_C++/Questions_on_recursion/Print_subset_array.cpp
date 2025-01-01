#include <bits/stdc++.h>
using namespace std;

void remove(int arr[], int n, int idx, vector<int> ans)
{
    if(idx==n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    remove(arr, n, idx+1, ans);
    ans.push_back(arr[idx]);
    remove(arr, n, idx+1, ans);
}
// void remove(string ans, string ori, int idx)
// {
//     if(idx==ori.length())
//     {
//         cout<<ans;
//         return;
//     }
//     char ch = ori[idx];
//     if(ch=='a') remove(ans, ori, idx+1); 
//     else remove(ans+ch, ori, idx+1);
// }

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
    
    vector<int> v;
    remove(arr, n, 0, v);
    for (int ele : v)
    {
        cout<<ele<<" ";
    }
    
    return 0;
}
