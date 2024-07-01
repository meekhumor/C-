#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) 
{

    int lo = 0;
    int hi = nums.size()-1;
    int pvt = -1;

    if(nums.size()==2)
    {
        if(target == nums[0]) return 0;
        else if(target == nums[1]) return 1;
        else return -1;
    }
    while(lo <= hi)
    {
        int mid = lo + (hi-lo)/2;

        if(mid==0) lo = mid+1;
        else if(mid==nums.size()-1) hi = mid-1;
        else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]) 
        {
            pvt = mid;
            break;
        }
        else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) 
        {
            pvt = mid + 1;
            break;
        }
        else if(nums[mid]>nums[hi]) lo = mid + 1;
        else hi = mid-1;
    }
    if(pvt == -1) // already sorted
    {
        lo = 0;
        hi = nums.size()-1;

        while(lo <= hi)
        {
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
    }
    if(target >= nums[0] && target <= nums[pvt-1])
    {
        lo = 0;
        hi = pvt-1;

        while(lo <= hi)
        {
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
    }
    else
    {
        lo = pvt;
        hi = nums.size()-1;

        while(lo <= hi)
        {
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
    }
    return -1;
}


int main()
{
    system("cls");
    vector<int> v; 
    int size;
    cout<<"Enter size of array: ";
    cin>>size;


    cout<<"Enter rotated array: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int k;
    cout<<"Enter target element: ";
    cin>>k;

    cout<<search(v,k);

    return 0;
}