#include <bits/stdc++.h>
using namespace std;

// Time Complexity: log(a+b)

// Euclid Division Algorithm
void gcd(int min, int max)
{
    if(min == 0) cout<<max;
    gcd(max%min, min);
}
int main()
{
    system("clear");
    int a,b;
    cout<<"Enter any 2 numbers: ";
    cin>>a>>b;

    gcd(max(a,b), min(a,b));
    return 0;
}