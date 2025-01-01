#include <bits/stdc++.h>
using namespace std;

void permutations(string ans, string original)
{
    if(original == "")
    {
        cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < original.length(); i++)
    {
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutations(ans+ch, left+right);
    }
    
}
int main()
{
    system("clear");
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    permutations("",str);
    
    return 0;
}