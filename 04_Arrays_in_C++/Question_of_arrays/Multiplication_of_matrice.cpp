#include<iostream>
using namespace std;


int main()
{
    system ("clear");

    int row1;
    cout<<"Enter row of matrix 1: ";
    cin>>row1;

    int column1;
    cout<<"Enter column of matrix 1: ";
    cin>>column1;


    int mat1[row1][column1]; 
    cout<<"Enter any "<<row1*column1<<" values: \n";


    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cin>>mat1[i][j];
        }
        
    }

    int row2;
    cout<<"Enter row of matrix 2: ";
    cin>>row2;

    int column2;
    cout<<"Enter column of matrix 2: ";
    cin>>column2;

    int mat2[row2][column2]; 
    cout<<"Enter any "<<row2*column2<<" values: \n";


    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cin>>mat2[i][j];
        }
        
    }
    cout<<"Matrix 1:\n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 2:\n";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
   
    int mulmat[row1][column2] ;
   if (column1==row2)
   {
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0 ; j < column2; j++)
        {   mulmat[i][j]=0;
            for (int k = 0; k < column1; k++)
            {
                mulmat[i][j] += mat1[i][k] * mat2[k][j];
            }
            
        }
        cout<<endl;
    }
    }
    else cout<<"Matrix cant be multiplied ";

    cout<<"Multiplication Matrix:\n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout<<mulmat[i][j]<<" ";
        }
        cout<<endl;
    }

      
   
    return 0;
}