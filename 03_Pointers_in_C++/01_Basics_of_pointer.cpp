#include <bits/stdc++.h>
using namespace std;

// a way to store address is pointers
// syntax: data_type *pointer_name

int main()
{
    system("cls");
    int x;
    cout<< &x<<endl;  // address of x in memory
    x = 9;
    cout<< &x<<endl;  // same address

    int *p = &x;
    cout<<p<<endl; // it displays the address which it has stored.

    cout<<&p; // address of pointer 

    return 0;
}