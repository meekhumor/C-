#include <bits/stdc++.h>
using namespace std;    

int main()
{
    system("clear");
    string s;
    cout<<"Enter a word: ";
    getline(cin,s);

    vector<int> v(26,0); // form a vector of size 6
    
    for (int i = 0; i < s.length(); i++)    // alloting number in vector for alphabets in string 
    {
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii-97]++;
    }
    int mx = 0;
    for (int i = 0; i < 26; i++)    // finding the max occurence 
    {
        if(v[i]>mx) mx = v[i];
    }

    for (int i = 0; i < 26; i++)    // displaying the character corresponding to max occurence
    {
        if (v[i]==mx)
        {
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx;
        }
        
    }
    
}
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     system("clear");
//     string s;
//     cout<<"Enter a word: ";
//     getline(cin,s);

//     sort(s.begin(),s.end());

//     int max=0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         int count = 1;
//         for (int j = i+1; j < s.length(); j++)
//         {
//             if (s[i]==s[j])   count++;
//         }
//         if(max<count) max = count;        
        
//     }

//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         int count = 1;
//         for (int j = i+1; j < s.length(); j++)
//         {
//             if (s[i]==s[j])   count++;
//         }
//         if(count==max) cout<<ch<<" "<<max<<endl;        
        
//     }
//     return 0;
// }