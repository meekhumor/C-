#include <bits/stdc++.h>
using namespace std;

// Remove all occurence of 'a' from string

// void remove(string ans, string ori)
// {
//     if(ori.length()==0)
//     {
//         cout<<ans;
//         return;
//     }
//     char ch = ori[0];
//     if(ch=='a') remove(ans, ori.substr(1));
//     else remove(ans+ch, ori.substr(1));
// }
void remove(string ans, string ori, int idx)
{
    if(idx==ori.length())
    {
        cout<<ans;
        return;
    }
    char ch = ori[idx];
    if(ch=='a') remove(ans, ori, idx+1);
    else remove(ans+ch, ori, idx+1);
}

int main()
{
    system("clear");
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    remove("", str, 0);
    return 0;
}