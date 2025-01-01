#include<iostream>
#include<sstream>
using namespace std;    // ' '=32

int main()
{
    system("clear");
    string str;
    cout<<"Enter a sentence: ";
    getline(cin,str);

    stringstream ss(str);
    string temp;

    while(ss>>temp) //everytime a string goes to temp through stringstream
    {
        cout<<temp<<endl;
    }
    

    return 0;
}