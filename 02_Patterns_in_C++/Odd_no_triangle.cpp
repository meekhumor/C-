#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        int k = 1;
        for (int j = 0; j <= i; j++)
        {
            cout<<k<<" ";
            k+=2;
        }
        cout<<endl;
    }
    
    return 0;
}