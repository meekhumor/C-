#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    system("cls");
    string s ="abcdef";
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()-1);
    cout<<s<<endl;
    return 0;
}