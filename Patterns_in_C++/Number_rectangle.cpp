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

    int column;
    cout<<"Enter no. of column: ";
    cin>>column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}