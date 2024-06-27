#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    vector<int> v;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;


    cout<<"Enter sorted array starting with 0: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int lo = 0;
    int hi = v.size()-1;
    int ans = -1;

    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(v[mid] == mid) lo = mid+1;
        else 
        {
            ans = mid;
            hi = mid-1;
        }
    }
    cout<<"Smallest missing term: "<<ans;
    return 0;
}