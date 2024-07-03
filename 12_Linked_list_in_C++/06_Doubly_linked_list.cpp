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
        size = 0;
    }
    void insertAtTail(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; // extra
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int val, int idx){
        if(idx<0) cout<<"Invalid_Index ";
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
    void deleteAtHead(){
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        head = head->next;
        if(head == NULL) tail = NULL; // extra
        else head->prev = NULL; // extra
        size--;
    }
    void deleteAtTail(){
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        else if(size == 1){
            deleteAtHead();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        else if(idx == 0){
            deleteAtHead();
            return;
        }
        else if(idx == size-1){
            deleteAtTail();
            return;
        }
        else{
            Node *temp = head;
            for(int i=0; i<idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; // extra
            size--;
        }
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
    DLL list;
    list.insertAtTail(1);
    list.display();
    list.insertAtTail(2);
    list.display();
    list.insertAtTail(3);
    list.display();
    list.insertAtTail(4);
    list.display();
    list.insertAtTail(5);
    list.display();
    list.insertAtTail(6);
    list.display();
    list.insertAtHead(7);
    list.display();
    list.insertAtIdx(8, 2);
    list.display();
    list.deleteAtHead();
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtIdx(2);
    list.display();
    return 0;
}