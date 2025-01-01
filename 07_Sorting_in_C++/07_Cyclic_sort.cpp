#include <bits/stdc++.h>
using namespace std;

// 1 to n kuch kaam karna ho toh cyclic sort use krte hai


int main()
{
    system("clear");
    int  n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of array : ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int i = 0;
    while(i<n)
    {
        int crtidx = arr[i] - 1;
        if(i == crtidx) i++;
        else swap(arr[i], arr[crtidx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
