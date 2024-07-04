#include <bits/stdc++.h>
using namespace std;

vector<int> prevGreatest(vector<int>arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n);
    ans[0] = -1;
    st.push(arr[n-1]);
    for(int i=1; i<n; i++){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}
int main()
{
    system("cls");
    vector<int> v{3,1,2,5,4,6,2,3};
    v = prevGreatest(v);
    for (int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
    return 0;
}