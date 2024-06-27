#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int power(int n, int p)
{
    if(p==0) return 1;
    if(n==0 && p==0)
    {
        cout<<"0 raise to power 0 is not defined"<<endl;
        return -100;
    }
    return n * power(n, p-1);
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

    cout<<n<<"^"<<p<<" = "<<power(n,p);
    return 0;
}