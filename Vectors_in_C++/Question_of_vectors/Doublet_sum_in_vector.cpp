#include<iostream>
#include<vector>
using namespace std;
 
// Find the doublet in Array whose sum is equal to gven value x

int main()
{
    system("cls");
    int x;
    cout<<"Enter target : ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter array size :  ";
    cin>>n;

    cout<<"Enter array elements : \n";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<endl;
    
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size()-1; j++)
        {
            if (v[i]+v[j]==x)
            {
                 cout<<"("<<i<<","<<j<<")"<<endl;
            }
               
        }
            
    }
    


}