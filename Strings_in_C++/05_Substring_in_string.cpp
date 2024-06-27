#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    string s = "abcdef";
    string temp = s.substr(1, 3); // s.substr(idx,len)
    cout << temp;
    return 0;
}