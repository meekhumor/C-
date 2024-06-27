#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

// No. of ways a boy can reach upstair if he steps 1 or 2 
int stair(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;

    return stair(n-1) + stair(n-2);
}
int main()
{
    system("cls");
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<stair(n);
    return 0;
}