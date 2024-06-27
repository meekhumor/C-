#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

// Remove all occurence of 'a' from string

void remove(string ans, string ori, vector<string> &v, bool flag)
{
    if(ori=="")
    {
        v.push_back(ans);
        return;
    }
    char ch = ori[0];

    // For Runtime Error:

    // if(ori.length()==1)
    // {
    //     if(flag == true)remove(ans+ch, ori.substr(1), v, true);
    //     remove(ans, ori.substr(1), v, true);
    //     return;
    // }
    
    char dh = ori[1];
    if(ch == dh)
    {
        if(flag == true)remove(ans+ch, ori.substr(1), v, true);
        remove(ans, ori.substr(1), v, false);
    }
    else
    {
        if(flag == true)remove(ans+ch, ori.substr(1), v, true);
        remove(ans, ori.substr(1), v, true);
    }
}

int main()
{
    system("cls");
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    vector<string> v;
    remove("", str, v, true);
    for (string ele : v)
    {
        cout<<ele<<" ";
    }
    
    return 0;
}