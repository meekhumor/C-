#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) // pass by reference
{
    int temp =a;
    a = b;
    b = temp;
    return;
}

int main()
{
    system("cls");
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
// void swap(int *x, int *y) // x and y are pointer storing address of a and b (*x = &a; *y = &b)
// {
//     int temp = *x; // abstracting a with help of dereference operator
//     *x = *y;
//     *y = temp;
//     return;
// }

// int main()
// {
//     system("cls");
//     int a, b;
//     cout<<"Enter a and b: ";
//     cin>>a>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
//     return 0;
// }