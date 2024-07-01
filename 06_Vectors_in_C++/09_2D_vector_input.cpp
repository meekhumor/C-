#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

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
    system("cls");
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

   return 0;
}