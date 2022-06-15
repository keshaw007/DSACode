#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left=NULL;
    Node *right=NULL;
    int data;
};

class Tree
{
public:
    Node *root;
    Tree()
    {
        root=NULL;
    }
    Node * Insert(Node *p,int x);
    void Display(Node *p);
    Node * Delete(Node *p,int x);
    int Height(Node *p);
    int InPre(Node *p);
};

int Tree::Height(Node *p)
{
    if(!p)
        return 0;
    int x=Height(p->left);
    int y=Height(p->right);
    int z=max(x,y);
    return z+1;
}

int Tree::InPre(Node *p)
{
    
}

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

Node *Tree::Delete(Node *p,int x)
{
    if(x<p->data)
    {
        p->left=Delete(p->left,x);
    }
    else if(x>p->data)
    {
        p->right=Delete(p->right,x);
    }
    else
    {
        if(Height(p->left)>Height(p->right))
        {

        }
        else
        {

        }
    }
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
    t.root=t.Insert(t.root,30);
    t.Insert(t.root,20);
    t.Insert(t.root,40);
    t.Insert(t.root,10);
    t.Insert(t.root,25);
    t.Insert(t.root,35);
    t.Insert(t.root,50);
    t.Display(t.root);
    return 0;
}