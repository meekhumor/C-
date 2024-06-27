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

    int t = 0;
    bool flag = false;
    while(lo <= hi)
    {

        int mid = (lo+hi)/2;

        if(v[mid] == k)
        {
            flag = true;
            cout<<"Lower bound of "<<20<<" is: "<<v[mid-1]<<endl;
            cout<<"Higher bound bound of "<<20<<" is: "<<v[mid+1]<<endl; 
            break;
        }
        else if(v[mid] < k) lo = mid+1;
        else hi = mid-1;
    }
    if (flag == false)
    {
        cout<<"Lower bound of "<<20<<" is: "<<v[hi]<<endl;
        cout<<"Higher bound bound of "<<20<<" is: "<<v[lo]<<endl;
    }
    
    return 0;
}