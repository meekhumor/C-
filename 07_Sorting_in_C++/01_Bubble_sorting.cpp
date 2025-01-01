#include <bits/stdc++.h>
using namespace std;

// Observation:
// In each pass the nth max element goes to its right posistion
// If there are 'n' elements, then we require almost 'n-1' passes to sort the array

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    system("clear");
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

    // optimized bubble sort
    for (int i = 0; i < v.size()-1; i++) // size-1 passes
    {   
        bool flag = true;
        for (int j = 0; j < v.size()-i-1; j++)
        {
            if(v[j]>v[j+1]) 
            {
                swap(v[j], v[j+1]); // swap
                flag = false;
            }
        }
        if(flag==true) break; // swap didn't occured
    }

    cout<<"Sorted array: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}