#include <bits/stdc++.h>
using namespace std;

// Time Complexity: log n

int power(int n, int p)
{
    if(p==0) return 1;
    if(p==1) return n;
    if(n==0 && p==0)
    {
        cout<<"0 raise to power 0 is not defined"<<endl;
        return -100;
    }
    int ans = power(n,p/2);
    if(p%2==0) return ans*ans;
    else return ans*ans*n;
}
int main()
{
    system("cls");
    int n;
    cout<<"Enter a base: ";
    cin>>n;
    int p;
    cout<<"Enter a power: ";
    cin>>p;

    cout<<n<<"^"<<p<<" = "<<power(n,p)<<endl;
    cout<<pow(n,p);
    return 0;
}