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
class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insertAtHead(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtTail(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
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
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        Node *temp = head;
        while(temp->next!= tail){
            temp = temp->next;
        }
        tail->next = NULL;
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
            size--;
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
    ll.display();
    ll.insertAtTail(29);
    ll.display();
    ll.insertAtHead(2);
    ll.display();
    ll.insertAtIdx(10,1);
    ll.display();
    ll.deleteAtIdx(0);
    ll.display();

    return 0;
}