#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    int x;
    int *ptr = &x; // used to store address of datatype
    int **dptr = &ptr; // used to store address of pointer

    cout<<ptr<<" "<<dptr;
    return 0;
}