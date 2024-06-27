#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

// insertion sort is stable sort

int main()
{
    system("cls");
    vector<int> v;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for (int j = 1; j < v.size(); j++)
    {
        for (int k = j; k > 0; k--)
        {
            if(v[k]<v[k-1]) swap(v[k], v[k-1]);
            else break;
        }
    }

    cout<<"Sorted array: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
            
    return 0;
}