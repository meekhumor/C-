#include<iostream>
#include<vector>
using namespace std;

// Find the next permutation of array.

void display(vector<int> &v)
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

void reverse(int i, int j, vector<int> &v)
{
    while(i<=j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
void nextpermutation(vector<int> &v)
{
    int s = v.size();
    int idx = -1; // pivot index
    for (int i = s-2; i >= 0; i--)
    {
        if (v[i] < v[i+1]) 
        {
            idx=i;
            break;
        }
        
    }
    if (idx==-1)
    {
        reverse(idx+1,s-1,v);
    }
    else
    {
    reverse(idx+1,s-1,v);
    swap(v[idx],v[idx+1]);
    }    
}
int main()
{
    system("cls");
    vector<int> v;

    int s;
    cout<<"Enter the size of array: ";
    cin>>s;

    cout<<"Enter any "<<s<<" values: ";

    for (int i = 0; i < s; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    display(v);
    cout<<endl;
    nextpermutation(v);
    display(v);

}

//-------------------------------------------------------------------------------------------------------------------------------------------
// Wrong method bcoz you can't find next permutation of 4 3 2 1, etc

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// Find the next permutation of array.

// void display(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
// }

// void swap(int &i, int &j)
// {
//     int temp = i;
//     i = j;
//     j = temp;
// }
// void nextpermutation(vector<int> &v)
// {
//     int s = v.size();
//     int  i = s-1;
//     while(i>=0)
//     {
//         if(v[i]>v[i-1])
//         {
//             swap(v[i],v[i-1]);
//             swap(v[i-1],v[s-1]);
//             break;
//         }
//         else i--;
        
//     }
    
// }
// int main()
// {
//     system("cls");
//     vector<int> v;

//     int s;
//     cout<<"Enter the size of array: ";
//     cin>>s;

//     cout<<"Enter any "<<s<<" values: ";

//     for (int i = 0; i < s; i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
    
//     display(v);
//     cout<<endl;
//     nextpermutation(v);
//     display(v);

// }