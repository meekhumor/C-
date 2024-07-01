#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) 
{
    int lo = 1;
    int hi = arr.size()-1;

    while(lo <= hi)
    {
        long mid = (lo+hi)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) 
        {
            return mid;
            break;
        }
        else if(arr[mid] > arr[mid+1]) hi = mid-1;
        else  lo = mid+1;
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


    cout<<"Enter mountain array: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<peakIndexInMountainArray(v);

    return 0;
}