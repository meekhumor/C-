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
            if(i==(row+1)/2 || j==(row+1)/2) cout<<"* ";
            else cout<<"  "; 
        }
        cout<<endl;
    }
    
    return 0;
}