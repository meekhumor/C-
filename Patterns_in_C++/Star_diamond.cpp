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
    for (int i = 0; i < (2*row)-1; i++)
    {
        for (int k = 0; k < nsp; k++)
        {
            cout<<"  ";
        }
        if(i<row-1) nsp--;
        else nsp++;
        
        for (int j = 0; j < nst; j++)
        {
            cout<<"* ";
        }
        if(i<row-1) nst += 2;
        else nst -= 2;

        cout<<endl; 
    }
    return 0;
}