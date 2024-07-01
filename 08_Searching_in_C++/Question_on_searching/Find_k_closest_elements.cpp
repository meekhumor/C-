#include <bits/stdc++.h>
using namespace std;

int mod(int x)
{
    if(x<0) x = -1*x;
    return x;
}

vector<int> findClosestElements(vector<int>& arr, int k, int x) 
{
    int lo = 0;
    int hi = arr.size()-1;
    int idx = -1;
    vector<int> v;

    if(x < arr[0])
    {
        for(int i = 0; i < k; i++)
        {
            v.push_back(arr[i]);
        }
    }
    else if(x > arr[arr.size()-1])
    {
        for(int i = 0; i < k; i++)
        {
            v.push_back(arr[arr.size()-1-i]);
        }
    }
    else
    {
        while(lo <= hi )
        {
            int mid = (lo+hi)/2;
            if(arr[mid] == x) 
            {
                idx = mid;
                break;
            }
            else if(arr[mid] < x) lo = mid+1;
            else hi = mid-1;
        }

        lo = 0;
        hi = arr.size()-1;
        int lb, ub;

        bool flag = false;
        while(lo <= hi)
        {

            int mid = (lo+hi)/2;

            if(arr[mid] == x)
            {
                flag = true;
                lb = mid-1;
                ub = mid+1; 
                break;
            }
            else if(arr[mid] < x) lo = mid+1;
            else hi = mid-1;
        }
        if (flag == false)
        {
            lb = hi;
            ub = lo;
        }
        
        if (idx==-1) 
        {
            int count = 0;

            while(count < k && lb >= 0 && ub <= arr.size()-1)
            {
                if(mod(arr[lb]-x)<mod(arr[ub]-x))
                {
                    v.push_back(arr[lb]);
                    lb--; 
                    count++;
                }
                else if (mod(arr[lb]-x)>mod(arr[ub]-x))
                {
                    v.push_back(arr[ub]);
                    ub++; count++;
                }
                else 
                {
                    if(arr[lb]>arr[ub]) 
                    {
                        v.push_back(arr[ub]);
                        ub++;
                        count++;
                    }
                    else
                    {
                        v.push_back(arr[lb]);
                        lb--;
                        count++;
                    }
                }
            }
        }
        else
        {
            int count = 0;
            v.push_back(arr[idx]);

            while(count < k-1 && lb >= 0 && ub <= arr.size()-1)
            {
                if(mod(arr[lb]-x)<mod(arr[ub]-x))
                {
                    v.push_back(arr[lb]);
                    lb--; 
                    count++;
                }
                else if (mod(arr[lb]-x)>mod(arr[ub]-x))
                {
                    v.push_back(arr[ub]);
                    ub++; 
                    count++;
                }
                else 
                {
                    if(arr[lb]>arr[ub]) 
                    {
                        v.push_back(arr[ub]);
                        ub++;
                        count++;
                    }
                    else
                    {
                        v.push_back(arr[lb]);
                        lb--;
                        count++;
                    }
                }
            }
        }
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}

int main()
{
    system("cls");
    vector<int> v;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;


    cout<<"Enter sorted array: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int x;
    cout<<"Enter target element: ";
    cin>>x;

    int k;
    cout<<"Enter k: ";
    cin>>k;
    

    findClosestElements(v,k,x);

    return 0;
}