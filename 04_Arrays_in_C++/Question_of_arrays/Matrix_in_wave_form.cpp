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

    int mat1[row][column];
    cout<<"Enter any "<<row*column<<" values:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>mat1[i][j];
        }
        
    }

    cout<<"Matrix in wave form: \n";
    for (int i = 0; i < row; i++)
    {
            if (i%2==0)
            {
                for (int j =0; j <column; j++)
                {
                    cout << mat1[i][j] <<" ";

                } 
            }
            else
            {
                    for (int j = column-1; j >= 0; j--)
                {
                    cout << mat1[i][j] <<" ";

                }
            }
        
    }
    
    return 0;
}