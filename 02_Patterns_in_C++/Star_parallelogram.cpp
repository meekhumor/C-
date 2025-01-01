#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;

    int column;
    cout<<"Enter no. of column: ";
    cin>>column;

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < row-i-1; k++)
        {
            cout<<"  ";
        }
        
        for (int j = 0; j < column; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}