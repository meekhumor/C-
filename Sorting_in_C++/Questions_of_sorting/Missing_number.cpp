#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int missingNumber(vector<int>& nums)
{
    int i = 0;
    while(i<nums.size())
    {
        int ridx = nums[i];
        if(ridx == i || nums[i] == nums.size()) i++;
        else swap(nums[i], nums[ridx]);
    }
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != i) return i;
    }
    return nums.size();
}
    
int main()
{
    system("cls");

    int n;
    cout<<"Enter a size of array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter any "<<n<<" elements in array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Missing number: "<<missingNumber(v);
    
    
    return 0;
}