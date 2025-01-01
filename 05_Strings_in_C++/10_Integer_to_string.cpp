#include<iostream>
using namespace std;

bool isPalindrome(int x) 
{
    string s = to_string(x);
    int n = s.length();
    int count = 0;
    {
        for(int i = 0; i < n/2; i++)
        {
            if(s[i]==s[n-1-i]) count++;
        }
        if(count==n/2) return true;
        else return false;
    }
}

int main()
{
    system("clear");
    int x = -12345;
    string s = to_string(x);

    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    
    cout<<endl<<s.length(); // length of given number
    isPalindrome(x);
    return 0;
}