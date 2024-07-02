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

class DLL{
public:
Node *head;
Node *tail;
int size;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtTail(int val){
        Node *temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
    }
    void insertAtHead(int val){
        Node *temp = new Node(val);
        temp->next = head;
        temp->prev = NULL; // extra
        head = temp;
        if(tail == NULL){
            tail = temp;
        }
    }
    void insertAtIdx(int val, int idx){
        if(idx<0 || idx>size) cout<<"Invalid_Index ";
        else if(idx == 0){
            insertAtHead(val);
        }
        else if(idx == size){
            insertAtTail(val);
        }
        else{
            Node *temp = new Node(val);
            Node *temp2 = head;
            for(int i=0; i<idx-1; i++){
                temp2 = temp2->next;
            }
            temp->next = temp2->next;
            temp->prev = temp2; // extra
            temp2->next->prev = temp; // extra
            temp2->next = temp;
            size++;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        };
    }
};


int main()
{
    system("cls");
    DLL list;
    list.insertAtTail(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.insertAtHead(4);
    list.insertAtIdx(5, 2);
    list.display();
    return 0;
}