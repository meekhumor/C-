    // FIFO : First In First Out
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    queue<int> q;
    // push
    // pop
    // front -> top
    // size
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.back()<<endl;

    return 0;
} 