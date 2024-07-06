#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
public:
    int f; // front
    int b; // back
    int s; // current size
    int c; // capacity
    vector<int> arr;
    CircularQueue(int k) {
        f = 0;
        b = 0;
        s = 0;
        c = k;
        vector<int> v(k);
        arr = v;
    }
    
    bool enQueue(int value) {
        if(s == c) return false;
        arr[b] = value;
        b++;
        if(b == c) b = 0;
        s++;
        return true;
    }
    
    bool deQueue() {
        if(s == 0) return false;
        f++;
        if(f == c) f = 0;
        s--;
        return true;
    }
    
    int Front() {
        if(s == 0) return -1;
        return arr[f];
    }
    
    int Rear() {
        if(s == 0) return -1;
        if(b == 0) return arr[c-1];
        return arr[b-1];
    }
    
    bool isEmpty() {
        if(s == 0) return true;
        else return false;
    }
    
    bool isFull() {
        if(s == c) return true;
        else return false;
    }
    void display(){
        if(s == 0){   
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
    system("cls");
    CircularQueue q(100);
    
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.display();
    q.deQueue();
    q.display();
    cout<<q.isFull()<<endl;
    q.enQueue(50);
    q.display();
    
    return 0;
} 

// enQueue(val): push_back
// deQueue(): pop_front
// rear(): back
// front(): front