#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter "<<n<<" elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);        
    }
    
    for(int i = nums.size()-2; i >= 0; i--)
    {
        nums[i] *= nums[i+1];
    }
    
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}