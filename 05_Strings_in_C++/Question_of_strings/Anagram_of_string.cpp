#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    system("clear");
    string s,t;
    cout<<"Enter first word: ";
    getline(cin,s);
    cout<<"Enter second word: ";
    getline(cin,t);

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s==t)
    {
        cout<<"Yes, it is anagram";
    }
    else
        cout<<"Yes, it is anagram";
    
    return 0;
}