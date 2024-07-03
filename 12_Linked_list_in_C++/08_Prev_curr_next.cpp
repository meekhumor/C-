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

Node* reverseList(Node* head) {
    if(head == NULL || head->next == NULL) return head;
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main()
{
    system("cls");
    Node* a = new Node(10); 
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b; 
    b->next = c; 
    c->next = d;

    reverseList(a);  
    
    return 0;
}