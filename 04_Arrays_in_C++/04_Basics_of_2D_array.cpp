#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    int r,c;
    cout<<"Enter no. of rows in array: ";
    cin>> r;
    
    cout<<"Enter no. of column in array: ";
    cin>> c;

    // int arr[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; correct method && {1,2,3,4,5,6,7,8,9}; correct method
    int arr[r][c]; // arr[][3] correct   arr[][] wrong   arr[4][] wrong
    // rows -> 0-r-1
    // columns -> 0-c-1
    cout<<"Enter any "<<c*r<<" values: \n";
    for (int i = 0; i < r; i++) // i is row
    {
        for (int j = 0; j < c; j++) // j is column
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < r; i++) // i is row
    {
        for (int j = 0; j < c; j++) // j is column
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    
}