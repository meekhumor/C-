#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    int x = 7;
    int *ptr = &x;
    cout<<ptr<<endl; // 0x61ff08
    ptr = ptr+1; // 0x61ff0c
    cout<<ptr<<endl;
    return 0;
}

// 0 1 2 3 4 5 6 7 8 9 a b c d e f
// we move 4 bytes(for int) forward by doint +1 in pointer (for char and bool 1 byte)