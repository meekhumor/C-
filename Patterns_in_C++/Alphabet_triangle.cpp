#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<(char)(j+65)<<" " ;
        }
        cout<<endl;
    }
    
    return 0;
}