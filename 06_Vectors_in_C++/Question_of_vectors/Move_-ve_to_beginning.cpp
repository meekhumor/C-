#include<iostream>
#include<vector>
using namespace std;

// Sort the array of negative and positive without using sort algorithm.

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
void sort(int i, int j, vector<int> &v)
{
    while (i<j)     
    {
        if (v[i]<0) i++;
        if (v[j]>0) j--;
        else if (v[i]>0 && v[j]<0) 
        {
        swap(v[i],v[j]);
        i++;
        j--;
        }
    }
    
    
}

int main()
{
    system("clear");
    vector<int> v;

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter any "<<n<<" "<<"real numbers : ";
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
