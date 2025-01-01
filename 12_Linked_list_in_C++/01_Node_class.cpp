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

int main()
{
    system("clear");
    Node* a = new Node(10); // adress of new node is stored in pointer a
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b; // *a (which is node a) ke next ki value mein b pointer ko store karo
    b->next = c;
    c->next = d;

    Node *temp = a; // now the pointer of a is stored in temp pointer
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    };

    return 0;
}