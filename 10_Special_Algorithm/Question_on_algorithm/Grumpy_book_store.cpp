#include <bits/stdc++.h>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes)
{
    int n = customers.size();
    int i = 1 ;
    int j = minutes;
    int sum = 0;
    for(int i = 0; i < minutes; i++)
    {
        if(grumpy[i] == 1) sum += customers[i];
    }
    int maxsum = sum;
    int maxidx;
    if(n == 1) maxidx = 0;
    while(j < n)
    {
        if(grumpy[i-1] == 1) {sum -= customers[i-1];}
        if(grumpy[j] == 1) {sum += customers[j];}
        if(maxsum < sum)
        {
            maxsum = sum;
            maxidx = i;
        }
        i++;
        j++;
    }
    int finalsum = 0;
    for(int i = 0; i < n; i++)
    {
        if(i >= maxidx && i < maxidx + minutes)
        {
            finalsum += customers[i];
        }
        else 
        {
            if(grumpy[i] == 0) finalsum += customers[i];
        }
    }
    return finalsum;
}
    
int main()
{
    system("cls");
    int v;
    cout<<"Enter size of customer vector: ";
    cin>>v;

    vector<int> customers ;
    cout<<"Enter "<<v<<" elements of customer vector: ";
    for (int i = 0; i < v; i++)
    {
        int x;
        cin>>x;
        customers.push_back(x);        
    }
    int g;
    cout<<"Enter size of grumpy vector:: ";
    cin>>g;

    vector<int> grumpy ;
    cout<<"Enter "<<g<<" elements of grumpy vector: ";
    for (int i = 0; i < g; i++)
    {
        int x;
        cin>>x;
        grumpy.push_back(x);        
    }
    int minutes = 3;
    cout<<maxSatisfied(customers,grumpy,minutes);
   
    return 0;
}