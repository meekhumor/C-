// Two pointer algorithm

#include<iostream>
#include<vector>
using namespace std;

// Sort the array of 0's and 1's without using sort algorithm.

void display(vector<int> &v )
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
     
}
void sort(int i, int j, vector<int> &v)
{
    while (i<j)     
    {
        if (v[i]==0) i++;
        if (v[j]==1) j--;
        else if (v[i]==1 && v[j]==0) 
        {
        int temp = v[j];
        v[j] = v[i];
        v[i] = temp;
        i++;
        j--;
        }
    }
    
    
}

int main()
{
    system("cls");
    vector<int> v;

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter any "<<n<<" "<<"values which includes only '0' and '1': ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<endl;
    sort(0,n-1,v);
    display(v);    

}

// Two pass algorithm

// #include<iostream>
// #include<vector>
// using namespace std;

// // Sort the array of 0's and 1's without using sort algorithm.

// void display(vector<int> &v )
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
     
// }
// void sort(vector<int> &v)
// {
//     int noz = 0;
//     int noo = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i]==0) noz++;
//         else  noo++;
        
//     }
    
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (i<noz) v[i] = 0;
//         else v[i] = 1;        
//     }
    
// }

// int main()
// {
//     system("cls");
//     vector<int> v;

//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;

//     cout<<"Enter any "<<n<<" "<<"values which includes only '0' and '1': ";
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
