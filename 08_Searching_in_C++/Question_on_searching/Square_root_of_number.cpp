#include <bits/stdc++.h>
using namespace std;

int sqrt(int x)
{
    int lo = 0;
    int hi = x;

    while (lo <= hi)
    {
        int mid = (lo+hi)/2;

        if(mid*mid == x) cout<<mid;
        else if(mid*mid > x) hi = mid-1;
        else lo = mid+1;
    }
    
}
int main()
{
    system("clear");

    int x;
    cout<<"Enter a number: ";
    cin>>x;

    sqrt(x);
    
}