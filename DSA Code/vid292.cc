#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left=NULL;
    Node *right=NULL;
    Node *next=NULL;
    int data=0;
    Node *add=NULL;
}*root=NULL;

class Queue
{
    Node *front;
    Node *rear;
public:
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue(Node *p);
    Node * dequeue();
    bool is_Empty();
};

void Queue::enqueue(Node *p)
{
    if(p)
    {
        Node *temp;
        temp=new Node;
        temp->add=p;
        if(front==NULL)
        {
            front=temp;
            rear=temp;
        }
        else
        {
            front->next=temp;
            front=temp;
        }
    }
}

Node * Queue::dequeue()
{
    Node *t=NULL;
    if(is_Empty()==false)
    {
        if(front!=rear)
        {
            t=rear->add;
            rear=rear->next;
        }
        else
        {
            t=rear->add;
            front=rear=NULL;
        }
    }
    return t;
}

bool Queue::is_Empty ()
{
    if(rear)
    {
        return false;
    }
    return true;
}

class Tree
{
public:
    void CreateTree();
    void DisplayLevelOrder(Node *p);
};

void Tree::CreateTree()
{
    Queue q;
    Node *last=NULL;
    cout<<"Enter root Node :- ";
    int r;
    cin>>r;
    Node *t;
    t=new Node;
    t->data=r;
    t->left=NULL;
    t->right=NULL;
    root=t;
    last=t;
    q.enqueue(root);
    while(q.is_Empty()==false)
    {
        int x,y;
        Node *tempo=q.dequeue();
        cout<<"Enter left child of "<<tempo->data<<" :- ";
        cin>>x;
        if(x!=-1)
        {
            Node *lnode;
            lnode=new Node;
            lnode->data=x;
            lnode->left=NULL;
            lnode->right=NULL;
            tempo->left=lnode;
            q.enqueue(lnode);
        }
        cout<<"Enter right child of "<<tempo->data<<" :- ";
        cin>>y;
        if(y!=-1)
        {
            Node *rnode;
            rnode=new Node;
            rnode->data=y;
            rnode->left=NULL;
            rnode->right=NULL;
            tempo->right=rnode;
            q.enqueue(rnode);
        }
    }
}

void Tree::DisplayLevelOrder(Node *p)
{
    Queue ql;
    ql.enqueue(p);
    while(ql.is_Empty()==false)
    {
        Node *ltemp=ql.dequeue();
        cout<<ltemp->data<<" ";
        ql.enqueue(ltemp->left);
        ql.enqueue(ltemp->right);
    }
}

// int main()
// {
//     Tree t;
//     t.CreateTree();
//     t.DisplayLevelOrder(root);
// }