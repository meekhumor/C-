#include <bits/stdc++.h>
using namespace std;

void display(queue<int> &q){
    int n = q.size();
    for (int i=0; i<n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void remove(queue<int> &q){
    int n = q.size();
    for (int i=0; i<n; i++){
        if (i%2 != 0){
            int x = q.front();
            q.push(x);
        }
        q.pop();
    }
}
int main()
{
    system("clear");
    queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    display(q);
    remove(q);
    display(q);

    return 0;
} 