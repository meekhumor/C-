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

class Stack{
public:
    Node *head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head == NULL){
            cout<<"Stack is empty";
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head == NULL){
            cout<<"Stack is empty";
            return -1;
        }
        return head->val;
    }
    void display(){
        Node *temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    system("clear");
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    st.pop();
    st.display();
    cout<<st.top()<<endl;

    return 0;
}