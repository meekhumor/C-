#include <bits/stdc++.h>
using namespace std;

// selection sort is unstable sort

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

    for (int i = 0; i < v.size()-1; i++)
    {
        int min = INT16_MAX;
        int midx = -1;
        for (int j = i; j < v.size(); j++) // minimum element calculation in orange box
        {
            if(v[j]<min) 
            {
                min = v[j];
                midx = j;
            }
        }
        swap(v[i], v[midx]);
    }

    cout<<"Sorted array: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}