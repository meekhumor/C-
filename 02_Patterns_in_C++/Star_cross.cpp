#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    int row;
    cout<<"Enter a odd row: ";
    cin>>row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if(i+j==6 || i==j) cout<<"* ";
            else cout<<"  "; 
        }
        cout<<endl;
    }
    
    return 0;
}