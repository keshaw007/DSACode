#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

class Tree
{
public:
    Node * Insert(Node *p,int key);
    void Display(Node *p);
};

Node * Tree::Insert(Node *p, int key)
{
    Node *t;
    if(p==NULL)
    {
        t=new Node;
        t->data=key;
        t->left=NULL;
        t->right=NULL;
        return t;
    }
    if(key<p->data)
    {
        p->left=Insert(p->left,key);
    }
    else if(key>p->data)
    {
        p->right=Insert(p->right,key);
    }
    return p;
}

void Tree::Display(Node *p)
{
    if(p)
    {
        Display(p->left);
        cout<<p->data<<" ";
        Display(p->right);
    }
}

int main()
{
    Tree t;
    Node *root=NULL;
    root=t.Insert(root,30);
    t.Insert(root,20);
    t.Insert(root,40);
    t.Insert(root,10);
    t.Insert(root,25);
    t.Insert(root,35);
    t.Insert(root,50);
    t.Display(root);
    return 0;
}