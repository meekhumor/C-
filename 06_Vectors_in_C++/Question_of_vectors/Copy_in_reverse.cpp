#include<iostream>
#include<vector>
using namespace std;

// Copy the content of one array into another in reverse order.

int main()
{
    system("clear");
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v1, v2;
    cout<<"Enter element : ";
    for (int i = 0; i < n; i++)
    {
        int p;
        cin>>p;
        v1.push_back(p);
        
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        int j = v1[i];
        v2.push_back(j);
    }
    cout<<"Original array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Reverse array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v2[i]<<" ";
    }
    
    
    
}