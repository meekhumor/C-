#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

// Time Complexity: 2^n

int fibo(int n)
{
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    system("cls");
    int n;
    cout<<"Enter number of iteration: ";
    cin>>n;

    cout<<fibo(n);
    return 0;
}