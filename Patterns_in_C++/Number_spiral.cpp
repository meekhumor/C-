#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    int row;
    cout<<"Enter no. of rows: ";
    cin>>row;

    for (int i = 1; i <= 2*row-1; i++)
    {
        for (int j = 1; j <= 2*row-1; j++)
        {
            if(i <= row && j <= row) cout<<row+1-min(i,j)<<" ";
            else if(i > row && j <= row) cout<<row+1-min(2*row-i,j)<<" ";
            else if( i <= row && j > row) cout<<row+1-min(i,2*row-j)<<" ";
            else cout<<row+1-min(2*row-i,2*row-j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}