#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int v){
        val = v;
        next = NULL;
        prev = NULL;
    }
};

class Deque{
public:
    Node *head;
    Node *tail;
    int size;
    Deque(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void push_back(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }
    void push_front(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; // extra
            head = temp;
        }
        size++;
    }
    void pop_front(){
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        head = head->next;
        if(head == NULL) tail = NULL; // extra
        else head->prev = NULL; // extra
        size--;
    }
    void pop_back(){
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        else if(size == 1){
            pop_front();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
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
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        };
        cout<<endl;
    }
};


int main()
{
    system("cls");
    Deque dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.display();
    dq.pop_front();
    dq.display();
    dq.pop_back();
    dq.display();
    dq.push_front(50);
    dq.display();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    return 0;
}