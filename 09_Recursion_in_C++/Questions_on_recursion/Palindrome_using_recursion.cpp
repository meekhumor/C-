#include <bits/stdc++.h>
using namespace std;

void palindrome(string str, int idx, bool flag)
{
    if(idx == (str.size()/2)+1) 
    {
        cout<<"True";
        return;
    } 
    if(str[idx] == str[str.length()-1-idx]) palindrome(str, idx+1, true);
    else 
    {
        cout<<"False";
        return;
    }
}
int main()
{
    system("clear");
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    palindrome(str, 0, true);
    return 0;
}