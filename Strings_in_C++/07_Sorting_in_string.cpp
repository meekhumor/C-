#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    system("cls");
    string s;
    cout<<"Enter a character: ";
    getline(cin,s);
    sort(s.begin(),s.end()); // ASCII sorting
    cout<<s;
    return 0;
}