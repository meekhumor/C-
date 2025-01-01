#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1<<" " ;
        }
        cout<<endl;
    }
    
    return 0;
}