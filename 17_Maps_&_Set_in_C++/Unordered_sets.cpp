#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    for (int ele : s){
        cout << ele << " ";
    }
    
    int target = 4;
    // s.find() -> it searches in the set, and if it is not found then it returns the last element
    if(s.find(target)!= s.end()){ // Target exists
        cout << "Target exists" << endl;
    } 
    
    return 0;
}
