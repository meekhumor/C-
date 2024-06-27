#include<iostream>
using namespace std;

int main()
{
    system("cls");
    // char str[] = {'a','b','c','d','e','\0'}; // '\0' is a null character
    char str[] = "abcde"; // if str[5] then error bcoz null character is also there
    for (int i = 0; str[i]!='\0'; i++)
    {
        cout<<str[i]<<" ";
    }
    str[2]='\0';
    cout<<endl<<str;
    
    return 0;
}