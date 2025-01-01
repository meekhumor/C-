#include <bits/stdc++.h>
using namespace std;

int maze(int sr,int sc, int er, int ec)
{
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr, sc+1, er, ec);
    int downways = maze(sr+1,sc, er, ec);
    return rightways + downways;
}
int main()
{
    system("clear");
    int sr;
    cout<<"Enter starting row: ";
    cin>>sr;
    int sc;
    cout<<"Enter starting column: ";
    cin>>sc;
    int er;
    cout<<"Enter ending row: ";
    cin>>er;
    int ec;
    cout<<"Enter ending column: ";
    cin>>ec;
    
    cout<<maze(sr,sc,er,ec);
    return 0;
}