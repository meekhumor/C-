#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("clear");
    int numrow;
    cout<<"Enter row number: ";
    cin>>numrow;

    vector<vector<int>> v;
    
    for (int i = 1; i <= numrow; i++)
    {
        vector<int> a(i);
        v.push_back(a);
    }
    // generate

    for (int i = 0; i < numrow; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j==0 || j==i) v[i][j] = 1;
            else  v[i][j] = v[i-1][j] + v[i-1][j-1];

        }
        
    }
    // print
    for (int i = 0; i < numrow; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    
    return 0;
}
