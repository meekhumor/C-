#include <bits/stdc++.h>
using namespace std;

// Function calling function
//Recursion as FOR loop

void fun(int n)
{
    if(n==0) return; // base call
    fun(n-1); // call
    cout<<n<<endl; // kaam

    // call k baad kaam: 1 2 3 4
    // kaam k baad call: 4 3 2 1
}
int main()
{
    system("clear");
    fun(4);
    return 0;
}










