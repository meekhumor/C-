#include <bits/stdc++.h>
using namespace std;

// Remove duplicate characters from a string
string removeDuplicates(string s)
{
    stack<char> st;
    st.push(s[0]);
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    system("cls");
    string s = "aaabbcddaaabffg";
    cout<<s<<endl;

    s = removeDuplicates(s);
    cout<<s<<endl;
    return 0;
}