#include<iostream>
using namespace std;

int main()
{
    system("clear");
    string str = "Om is studying C++";
    cout<<str.size()<<endl; // index: 0 to length-1
    
    str.push_back(' ');
    str.push_back('a');
    cout<<str<<endl;


    str.pop_back();
    cout<<str;
    return 0;
}