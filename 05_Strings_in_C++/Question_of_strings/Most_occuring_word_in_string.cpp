#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    string s;
    cout<<"Enter a sentence: ";
    getline(cin,s);

    stringstream ss(s);
    vector<string> v;

    string temp;
    while(ss>>temp)
    {
        v.push_back(temp);
    }

    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int count = 1;
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i]==v[j]) count++;
        }
        if(count>max) max = count;
    }

    for (int i = 0; i < v.size(); i++)
    {
        int count = 1;
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i]==v[j]) count++;
        }
        if(count==max) cout<<v[i]<<": "<<count<<" times"<<endl;
    }
          
    return 0;
}