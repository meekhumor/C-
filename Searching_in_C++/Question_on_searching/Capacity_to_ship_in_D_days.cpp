#include <bits/stdc++.h>
using namespace std;

int check(int mid, vector<int> &weights, int days)
{
    // int count = 0;
    // int d = 0; 
    // int md = mid;
    // while(count<=weights.size())
    // {
    //     int mid = md;
    //     while(mid > 0 )
    //     {
    //         if(mid >= weights[count])
    //         {
    //             mid -= weights[count];
    //             count++;
    //         }
    //         else 
    //         {
    //             break;
    //         }
    //     }  
    //     d++;
    // }
    // if(d<=days) return 1;
    // else return 0;

    int m = mid;
        int count = 1;
        for(int i=0; i<weights.size(); i++)
        {
            if(m>=weights[i]){
                m -= weights[i];
            }
            else{
                count++;
                m = mid;
                m -= weights[i];
            }
        }
        if(count>days) return false;
        else return true;

    
}

int shipWithinDays(vector<int>& weights, int days) 
{
    int sum = 0, max = INT8_MIN;
    for(int i = 0; i< weights.size(); i++)
    {
        sum += weights[i];
        if(weights[i] > max) max = weights[i];
    }

    int lo = max;
    int hi = sum;
    int ans;

    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(check(mid,weights,days)) 
        {
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }
    cout<<ans;
}

int main()
{
    system("cls");
    vector<int> weights;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;


    cout<<"Enter any "<<size<<" weights: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        weights.push_back(x);
    }

    int days;
    cout<<"Enter days: ";
    cin>>days;

    shipWithinDays(weights,days);

    return 0;
}

//// Online C++ compiler to run C++ program online
// #include <iostream>
// #include<vector>
// using namespace std;

// int check(int mid, vector<int> &weights, int days)
// {
//     int count = 0;
// int d = 0; 
// int md = mid;
// while(count<=weights.size())
// {
//     int mid = md;
//     while(mid > 0 )
//     {
//         if(mid >= weights[count])
//         {
//             mid -= weights[count];
//             count++;
//         }
//         else 
//         {
//             break;
//         }
//     }  
//     d++;
// }
// if(d<=days) cout<<"true";
// else cout<<"false";
// }


// int main() 
// {
// vector<int> weights;
// int size;
// cout<<"Enter size of array: ";
// cin>>size;


// cout<<"Enter any "<<size<<" weights: ";
// for (int i = 0; i < size; i++)
// {
//     int x;
//     cin>>x;
//     weights.push_back(x);
// }

// int mid;
// cout<<"Enter capacity: ";
// cin>>mid;

// int days;
// cout<<"Enter days: ";
// cin>>days;

// check(mid, weights, days);

// }