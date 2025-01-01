#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int n, int i)
{
    // if(i == (n-1)) return arr[0];
    // if(arr[0] < arr[i]) arr[0] = arr[i];
    // max(arr, n, i+1);
    if(i==n) return INT8_MIN;
    return(max(arr[i],max(arr,n,i+1)));
}
int main()
{
    system("clear");
    int  n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<max(arr,n,0);
    
    return 0;
}