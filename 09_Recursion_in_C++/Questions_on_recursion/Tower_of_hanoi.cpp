#include <bits/stdc++.h>
using namespace std;

// Minimum moves: (2^n)-1

// For n disks: Source --> Destination
// 1) n-1 disks: Source --> Helper (Recursion)
// 2) Biggest disk: Source --> Destination
// 3) n-1 disks: Helper --> Destination (Recursion)

void hanoi(int n, char s, char h, char d)
{
    if(n==0) return ;
    hanoi(n-1, s, d, h);
    cout<<s<<" --> "<<d<<endl;
    hanoi(n-1, h, s, d);
}

int main()
{
    system("clear");
    int n;
    cout<<"Enter no. of rings: ";
    cin>>n;
    
    hanoi(n,'S', 'H', 'D');
    return 0;
}