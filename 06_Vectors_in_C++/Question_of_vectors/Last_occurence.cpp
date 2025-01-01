#include<iostream>
#include<vector>
using namespace std;

// Find the last occurence of x in the array

int main()
{
    system("clear");
    vector<int> v;
    int x;
    cout<<"Enter the number you want to find: ";
    cin>>x;

    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);

    int idx = -1;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i]==x)
    //     {
    //         idx=i;
    //     }
    // }

    for (int i = v.size(); i >= 0; i--)
    {
        if (v[i]==x)
        {
            idx = i;
            break;
        }
    }
            
    cout<<idx;
}