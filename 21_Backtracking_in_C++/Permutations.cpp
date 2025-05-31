#include <bits/stdc++.h>
using namespace std;

void permutations(string &str, int i){
    if(i == str.size()){
        cout<<str<<endl;
        return;
    }

    unordered_set<char> s; // for handling repititions

    for(int j = i; j < str.size(); j++){
        if (s.count(str[i])) continue;
        swap(str[i], str[j]);
        permutations(str, i + 1);
        swap(str[i], str[j]);
    }
}

int main() {
    system("clear");

    string str = "abc";
    permutations(str, 0);
    
    return 0;
}