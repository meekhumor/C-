#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("clear");

   // When size of vector is not given
    vector<int> v;

    int n;
    cout<<"Enter number of elements you want in array: \n";
    cin>>n;

    cout<<"Enter any "<<n<<" "<<"values: \n";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
     
    
    
    
    
    
    
    
    
    
    
    
    
    
    // When size of vector is given:

    // vector<int> v(5);

    // cout<<"Enter any 5 values: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>v[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    
}