#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int v){
        val = v;
        next = NULL;
    }
};

class Queue{
public:
    Node *head;
    Node *tail;
    int size;

    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void push(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void pop(){
        if(size == 0){
            cout<<"Queue_is_Empty ";
            return;
        }
        head = head->next;
        size--;
    }
    int front(){
        if(size == 0){
            cout<<"Queue_is_Empty ";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size == 0){
            cout<<"Queue_is_Empty ";
            return -1;
        }
        return tail->val;
    }
    
    void display(){
        if(head == NULL){
            cout << "Queue_is_empty" << endl;
        }
        else{
            Node *temp = head;
            while(temp!= NULL){
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
        }
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
    cout<<q.front()<<endl;
    cout<<q.back();

    return 0;
}