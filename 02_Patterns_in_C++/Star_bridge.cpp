#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;

    for (int i = 0; i < 2*row-1; i++)
    {
        cout<<"* ";
    }
    cout<<endl;

    int nsp = 1;
    int nst = row-1;
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < nst; j++)
        {
            cout<<"* ";
        }

        for (int k = 0; k < nsp; k++)
        {
            cout<<"  ";
        }
        nsp += 2;

        for (int j = 0; j < nst; j++)
        {
            cout<<"* ";
        }
        nst--;

        cout<<endl; 
    }
    return 0;
}