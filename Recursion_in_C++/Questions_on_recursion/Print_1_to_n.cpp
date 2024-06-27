#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

void print(int n)
{
    if(n==0) return; 
    print(n-1); 
    cout<<n<<endl; 

}

// void print(int i,int n)
// {
//     if(n==0) return;
//     cout<<i<<endl;
//     print(i+1,n-1);
// }
int main()
{
    system("cls");
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    print(n);
    return 0;
}