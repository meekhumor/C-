// Three pointer algorithm (dutch flag algorithm)

#include<iostream>
#include<vector>
using namespace std;

// Sort the array of 0's, 1's and 2's without using sort algorithm.

void display(vector<int> &v )
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
     
}
void swap(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}
void sort(vector<int> &v)
{
    int lo = 0, mid = 0, hi = v.size()-1;
   
    while(mid<=hi)
    {
        if(v[mid]==2)
        {
            swap(v[mid],v[hi]);
            hi--;
        }
        else if(v[mid]==0)
        {
            swap(v[mid],v[lo]);
            lo++;
            mid++;
        }
        else mid++;
        
    }
    
}

int main()
{
    system("clear");
    vector<int> v;

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter any "<<n<<" "<<"values which includes only '0', '1' and '2': ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<endl;
    sort(v);
    display(v);    

}

// Two pass solution

// #include<iostream>
// #include<vector>
// using namespace std;

// // Sort the array of 0's, 1's and 2's without using sort algorithm.

// void display(vector<int> &v )
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
     
// }
// void sort(vector<int> &v)
// {
//    int noz = 0, noo = 0, notw = 0;
   
//    for (int i = 0; i < v.size(); i++)
//     {
//     if(v[i]==0) noz++;
//     if(v[i]==1) noo++;
//     if(v[i]==2) notw++;
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(i<noz) v[i]=0;
//         else if(i>=noz && i<noz+noo) v[i]=1;
//         else if(i>=noo && i<v.size()) v[i]=2;
//     }
    
// }

// int main()
// {
//     system("clear");
//     vector<int> v;

//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;

//     cout<<"Enter any "<<n<<" "<<"values which includes only '0', '1' and '2': ";
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     display(v);
//     cout<<endl;
//     sort(v);
//     display(v);    

// }
