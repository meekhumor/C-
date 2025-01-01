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

    a->next = b; 
    b->next = c;
    c->next = d;
    d->next = a; // extra
    
     Node *temp = a;
     while(temp->next!= a){
        temp = temp->next;
    }
    // Node at which it becomes circular
    cout<<temp->val<<endl;

    return 0;
}