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
}
class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int val){
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        if(tail == NULL){
            tail = temp;
        }
    }
    void insertAtTail(int val){
        Node *temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    void insertAtIdx(int val, int idx){
        if(idx<0 || idx>size) cout<<"Invalid Index";
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
            temp2->next = temp;
            size++;
        }
    }
    void deleteAtHead(){
        if(head == NULL){
            cout << "List is empty" << endl;
        }
        else{
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void deleteAtTail(){
        if(head == NULL){
            cout << "List is empty" << endl;
        }
        else if(head == tail){
            deleteAtHead();
        }
        else{
            Node *temp = head;
            while(temp->next!= tail){
                temp = temp->next;
            }
            tail = temp;
            tail->next = NULL;
            delete temp;
        }
    }
    void deleteAtIdx(int idx){
        if(head == NULL){
            cout << "List is empty" << endl;
        }
        else if(idx == 0){
            deleteAtHead();
        }
        else{
            Node *temp = head;
            for(int i = 1; i < idx-1; i++){
                temp = temp->next;
            }
            Node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
    }
    void display(){
        if(head == NULL){
            cout << "List is empty" << endl;
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
    system("cls");
    LinkedList ll;
    ll.insertAtTail(29);
    ll.insertAtHead(2);
    ll.insertAtIdx(10,1);
    ll.deleteAtIdx(0);
    ll.display();

    return 0;
}