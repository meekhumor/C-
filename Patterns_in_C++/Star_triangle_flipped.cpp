#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;

    // int nosp = row-1;
    // int nost = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
        // for (int j = 0; j < nosp; j++)
        // {
        //     cout<<"  ";
        // }
        // nosp--;
        

        // for (int k = 0; k < nost; k++)
        // {
        //     cout<<"* ";
        // }
        // nost++;
        // cout<<endl;
    }
    
    return 0;
}