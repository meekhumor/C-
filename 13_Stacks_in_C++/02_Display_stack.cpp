#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}