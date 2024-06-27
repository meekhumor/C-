#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

// Remove all occurence of 'a' from string

void remove(string ans, string ori, vector<string> &v)
{
    if(ori=="")
    {
        v.push_back(ans);
        return;
    }
    char ch = ori[0];
    remove(ans, ori.substr(1), v);
    remove(ans+ch, ori.substr(1), v);
}
// void remove(string ans, string ori, int idx)
// {
//     if(idx==ori.length())
//     {
//         cout<<ans;
//         return;
//     }
//     char ch = ori[idx];
//     if(ch=='a') remove(ans, ori, idx+1); 
//     else remove(ans+ch, ori, idx+1);
// }

int main()
{
    system("cls");
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    vector<string> v;
    remove("", str, v);
    for (string ele : v)
    {
        cout<<ele<<" ";
    }
    
    return 0;
}