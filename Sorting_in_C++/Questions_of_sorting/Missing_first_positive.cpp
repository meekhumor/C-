#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) 
    {
        int i = 0;
        while(i < nums.size())
        {
            if(nums[i] <= 0) i++;
            else if(nums[i] > nums.size()  || nums[nums[i] - 1] == nums[i] ) i++;
            else swap(nums[i], nums[nums[i] - 1]);
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != i+1) return i+1;
        }
        return nums.size()+1;
    }
int main()
{
    system("cls");
    int n;
    cout<<"Enter a size of array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter any "<<n<<" elements in array with duplicate number: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"First positive missing number: "<<firstMissingPositive(v);
    return 0;
}