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

    int nst = 1;
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < row-1-i; k++)
        {
            cout<<"  ";                
        }
        
        for (int j = 0; j < nst; j++)
        {
            cout<<"* ";
        }
        nst += 2;
        cout<<endl; 
    }
    
    return 0;
}