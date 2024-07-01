#include <bits/stdc++.h>
using namespace std;

// void sum(int i,int n)
// {
//     if(n==0) 
//     {
//         cout<<i<<endl;
//         return;
//     }
//     sum(i+n,n-1);
// }

int sum(int n)
{
    if(n==0) return 0;
    return n + sum(n-1);
}

int main()
{
    system("cls");
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<sum(n);
    return 0;
}