// Breadth First Search

#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }    
};

void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->val<<" ";
        q.pop();
        if(temp->left!= NULL) q.push(temp->left);
        if(temp->right!= NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main()
{
    system("clear");
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    levelOrderQueue(a);
    
    return 0;
}
