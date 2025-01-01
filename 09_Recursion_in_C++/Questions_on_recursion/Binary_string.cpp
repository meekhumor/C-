#include <bits/stdc++.h>
using namespace std;

// Generate all binary string of length n without consecutive '1's


void generate(string s, int n)
{
    if(n == 0)
    {
        cout<<s<<endl;
        return;
    }
    generate(s+'0', n-1);
    if(s=="" || s[s.length()-1] == '0') generate(s+'1', n-1);
}
int main()
{
    system("clear");
    int n;
    cout<<"Enter length: ";
    cin>>n;
    
    generate("", n);
    return 0;
}