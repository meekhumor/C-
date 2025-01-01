#include<iostream>
#include<vector>
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

    int mat[row][column];
    cout<<"Enter any "<<row*column<<" values:\n";
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>mat[i][j];
        }
        
    }

    cout<<"Matrix in spiral form: \n";
    for (int i = 0; i < 100; i++)
    {
        if (column<=0 || row<=0) {break;}

        for (int j = 0; j < column; j++) // Right
        {
            cout<<mat[i][j+i]<<" ";
        }
        if (column<=0 || row<=0) {break;}
        
        for (int j = 1; j < row; j++) // Down
        {
            cout<<mat[j+i][column+i-1]<<" ";
        }
        if (column<=0 || row<=0) {break;}

        for (int j = column-2; j >= 0; j--) // Left
        {
            cout<<mat[row+i-1][j+i]<<" ";
        }
        if (column<=0 || row<=0) {break;}
        
        for (int j = row-2; j >= 1; j--) // Up
        {   
            cout<<mat[j+i][i]<<" ";
        }
        
        column = column-2;
        row = row-2;
        
    }
    
    
    return 0;
}