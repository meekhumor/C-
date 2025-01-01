#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void fliprow(vector<vector<int>> &arr, int &row)
{
    for (int i = 0; i < arr[0].size(); i++)
    {
        if(arr[row][i]==0) arr[row][i] = 1;
        else arr[row][i] = 0;
    }
    
}
void flipcolumn(vector<vector<int>> &arr, int &column)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i][column]==0) arr[i][column] = 1;
        else arr[i][column] = 0;
    }
    
}

void display(vector<vector<int>> &arr)
{
    int row = arr.size();
    int column = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    system("clear");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;
    int column;
    cout<<"Enter no. of column: ";
    cin>>column;

    vector<vector<int>> mat;
    cout<<"Enter any "<<row*column<<" elements: \n";
    for (int i = 0; i < row; i++)
    {
        vector<int>vi;
        for (int j = 0; j < column; j++)
        {
            int x;
            cin>>x;
            vi.push_back(x);
        }
        mat.push_back(vi);
    }

    cout<<"Original Matrix: \n";
    display(mat);

    // Flipping matrix
    for (int i = 0; i < row; i++)
    {
        if(mat[i][0]==0) fliprow(mat,i); // make first element of every row '1'
    }
    for (int i = 0; i < column; i++)
    {
        int noo=0, noz=0;
        for (int j = 0; j < row; j++)
        {
            if(mat[j][i]==0) noz++;      // flip columnwise
            else noo++;
        }
        if(noz>noo) flipcolumn(mat,i);
    }
    
    cout<<"Flipped Matrix: \n";
    display(mat);

    // Total Sum of matrix
    cout<<"Total Sum: ";
    int totalsum = 0;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        int x = 1;
        for (int j = 0; j < column; j++)
        {
            sum += (mat[i][column-1-j])*x;
            x*=2;
        }
        totalsum += sum;
    }    
    cout<<totalsum;
    
    return 0;
}