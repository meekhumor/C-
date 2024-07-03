// LIFO: Last In First Out
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    return 0;
}