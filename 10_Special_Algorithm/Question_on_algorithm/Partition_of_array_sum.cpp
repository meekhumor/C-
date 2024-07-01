#include <bits/stdc++.h>
using namespace std;

int prefixsum(vector<int> nums, int si, int ei)
{
    for(int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i-1];
    }
    return nums[nums.size()-1];
}
int main()
{
    system("cls");
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

    
    for(int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i-1];
    }

    bool flag = false;
    for(int i = 1; i < nums.size(); i++)
    {
        if(2*nums[i] == nums[nums.size()-1])
        {
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
    return 0;
}