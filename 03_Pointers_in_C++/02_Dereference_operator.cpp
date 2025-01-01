#include <bits/stdc++.h>
using namespace std;

// *pointer_name : dereference operator

int main()
{
    system("clear");
    int x = 10;
    int *p = &x;

    cout<<*p<<endl; // abstracting the value from the address stored in pointer
    
    *p = 6; // deference operator can change the value from the address

    cout<<x;
    return 0;
}