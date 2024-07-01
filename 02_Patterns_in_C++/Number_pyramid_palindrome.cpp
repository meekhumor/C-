#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;

    int nst = 1;
    int nsp = row-1;
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < nsp; k++)
        {
            cout<<" ";
        }
        nsp--;
        
        for (int j = 0; j < nst; j++)
        {
            cout<<j+1;
        }
        nst += 1;

        for (int l = i-1; l >= 0; l--)
        {
            cout<<l+1;
        }
        
        cout<<endl; 
    }
    
    return 0;
}