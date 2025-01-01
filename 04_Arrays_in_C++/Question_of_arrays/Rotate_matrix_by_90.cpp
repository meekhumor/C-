#include<iostream>
using namespace std;

int main()
{
    system ("clear");

    int n;
    cout<<"Enter order of square matrix: ";
    cin>>n;

    int mat[n][n]; 
    cout<<"Enter any "<<n*n<<" values: \n";


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i>j)
            {
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;

            }
        
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j<n/2)
            {
            int temp = mat[i][j];
            mat[i][j] = mat[i][n-1-j];
            mat[i][n-1-j] = temp;
            }
            
        }
        
    }
    cout<<"Matrix after its been rotated by 90 degree: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}