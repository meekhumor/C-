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

int middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast!= NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}

void display(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    };
}

int main()
{
    system("clear");
    Node* a = new Node(10); 
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b; 
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;
    
    cout<<middleNode(a);
    

    return 0;
}