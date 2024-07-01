#include <bits/stdc++.h>
using namespace std;

void display(vector<string> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}

vector<string> findWords(vector<string>& words) 
{
string row1 = "qwertyuiop";
string row2 = "asdfghjkl";
string row3 = "zxcvbnm";
vector<string> v;
for(int i=0; i<words.size(); i++)
{
    string si = words[i];
    int count1 = 0, count2 = 0, count3 = 0;
    bool flag = false;
    for (int k = 0; k < si.length(); k++)
    {
        if((int)si[0] < 97)
        {
            flag = true;
            int ch = (int)si[0];
            char al = (char)(ch + 32);
            si[0] = al;
        }
        for (int j = 0; j < row1.size(); j++)
        {
            if(si[k]==row1[j]) 
            {
                count1++;
            }
        }
        if(count1==si.length())
        {
            if(flag == true)
            {
                int ch = (int)si[0];
                char al = (char)(ch - 32);
                si[0] = al;
            }
            v.push_back(si);
        } 
        for (int j = 0; j < row2.size(); j++)
        {
            if(si[k]==row2[j]) 
            {
                count2++;
            }
        }
        if(count2==si.length()) 
        {
            if(flag == true)
            {
                int ch = (int)si[0];
                char al = (char)(ch - 32);
                si[0] = al;
            }
            v.push_back(si);
        }
        for (int j = 0; j < row3.size(); j++)
        {
            if(si[k]==row3[j]) 
            {
                count3++;
            }
        }
        if(count3==si.length()) 
        {
            if(flag == true)
            {
                int ch = (int)si[0];
                char al = (char)(ch - 32);
                si[0] = al;
            }
            v.push_back(si);
        }
    }    
}
display(v);
}  


int main()
{
    system("cls");
    vector<string> v;

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter any "<<size<<" words in array: ";

    for (int i = 0; i < size; i++)
    {
        string si;
        getline(cin,si);
        v.push_back(si);
    }

    findWords(v);
    
    return 0;
}