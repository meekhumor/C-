#include<iostream>
using namespace std;

int main()
{
    system("clear");
    string str;
    cout<<"Enter your full name: ";
    getline(cin,str);
    cout<<str<<endl;
    cout<<str[0];
    return 0;
}