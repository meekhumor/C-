#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int si, int ei)
{
    int pvtelement = arr[(si+ei)/2]; // randomized pivot
    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if(i == (si+ei)/2) continue;
        if(arr[i]<= pvtelement) count++; 
    }
    int pvtidx = count + si;
    swap(arr[(si+ei)/2], arr[pvtidx]);

    int i = si;
    int j = ei;
    while(i<pvtidx && j>pvtidx)
    {
        if(arr[i] <= pvtelement) i++;
        if(arr[j] > pvtelement) j--;
        else if(arr[i] > pvtelement && arr[j] <= pvtelement)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pvtidx;
    
}
void  quicksort(int arr[], int si, int ei)
{
    if(si>=ei) return;
    int pi = partition(arr,si,ei);

    quicksort(arr, si, pi-1);
    quicksort(arr, pi+1, ei);
    
}
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


    cout<<"Before Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quicksort(arr,0,n-1);
    cout<<"After Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}