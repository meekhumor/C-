#include<iostream>
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

    int mat[row][column];
    cout<<"Enter any "<<row*column<<" values:\n";
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>mat[i][j];
        }
        
    }

    cout<<"Matrix in diagonal form: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i==j || i+j==row-1)
            {
                cout<<mat[i][j]<<" ";
            }    
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
        
    }
    
    return 0;
}