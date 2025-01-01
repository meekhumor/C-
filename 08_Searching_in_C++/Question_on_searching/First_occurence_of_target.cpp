#include <bits/stdc++.h>
using namespace std;

// only applied when array is sorted.

int main()
{
    system("clear");
    vector<int> v;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;


    cout<<"Enter sorted array: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int k;
    cout<<"Enter target element: ";
    cin>>k;

    int lo = 0;
    int hi = v.size()-1;

    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(v[mid] == k) 
        {
            if (v[mid]==v[mid-1])
            {
                hi = mid-1;
            }
            else 
            {
                cout<<"Index of target element in array is: "<<mid;
                break;
            }
            
        }
        else if(v[mid] < k) lo = mid+1;
        else hi = mid-1;
    }
    return 0;
}