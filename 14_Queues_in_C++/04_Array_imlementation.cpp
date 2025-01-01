#include <bits/stdc++.h>
using namespace std;
class Queue{
public: 
    int f;
    int b;
    int arr[100];
    Queue(){
        f = 0;
        b = 0;
    }
    void push(int val){
        if(b == 100){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(f-b == 0){
            cout<<"Queue Underflow"<<endl;
           return;
        }
        f++;
    }
    int front(){
        if(f-b == 0){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(f-b == 0){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    void display(){
        if(f-b == 0){   
            cout<<"Queue is Empty"<<endl;
            return;
        }
        for(int i = f; i < b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    system("clear");
    Queue q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.pop();
    q.display();
    cout<<q.size()<<endl;
    cout<<q.front();

    return 0;
} 