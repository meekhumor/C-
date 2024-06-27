#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

void find(int n, int *ptr1, int *ptr2)
{
    *ptr2 = n%10; // last digit
    while (n>9)
    {
        n /= 10;
    }
    *ptr1 = n;
    return;
}
int main()
{
    system("cls");
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int fdigit, ldigit;
    int *ptr1 = &fdigit;
    int *ptr2 = &ldigit;
    find(n, ptr1, ptr2);
    cout<<"First digit: "<<fdigit<<"\nLast digit: "<<ldigit;
    return 0;
}