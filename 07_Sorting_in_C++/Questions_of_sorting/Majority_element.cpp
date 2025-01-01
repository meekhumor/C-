#include <bits/stdc++.h>
using namespace std;

// The majority element is the element that appears more than ⌊n / 2⌋ times.

int majorityElement(vector<int>& nums) 
{
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int count = 0;
    //     for (int j = i+1; j < nums.size(); j++)
    //     {
    //         if(nums[i]==nums[j]) count++;
    //     }
    //     if(count>(n/2)) return nums[i];
    // }
    // return -1;
    sort(nums.begin(),nums.end());
    cout<<nums[nums.size()/2];

}

int main()
{
    system("clear");
    vector<int> v;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    majorityElement(v);


    return 0;
}