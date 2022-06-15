#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *add;
    Node *right;
    Node *next;
}*root=NULL,*last=NULL;

class Queue
{
    Node *rear;
    Node *front;
public:
    Queue()
    {
        rear=NULL;
        front=NULL;
    }
    void Enqueue(Node *p);
    Node * Dequeue();
    bool Qempty();
};

void Queue::Enqueue(Node *p)
{
    Node *t;
    t=new Node;
    t->add=p;
    t->next=NULL;
    if(front==NULL)
    {
        front=rear=t;
    }
    else
    {
        front->next=t;
        front=t;
    }
}

Node * Queue::Dequeue()
{
    Node *t;
    t=rear->add;
    if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        rear=rear->next;
    }
    return t;
}

bool Queue::Qempty()
{
    if(rear==NULL)
    {
        return true;
    }
    return false;
}

class Tree
{
public:
    Queue q;
    void Insert(int x);
    void RInsert(Node *p,int x);
    void Display(Node *root);
    void LDisplay(Node *root);
};

void Tree::Insert(int x)
{
    Node *temp;
    temp=new Node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        Node *p=root;
        while(true)
        {
            if(p)
            {
                if(x>p->data)
                {
                    last=p;
                    p=p->right;
                }
                else
                {
                    last=p;
                    p=p->left;
                }
            }
            else
            {
                if(x>last->data)
                {
                    last->right=temp;
                    break;
                }
                else
                {
                    last->left=temp;
                    break;
                }
            }
        }
    }
}

void Tree::RInsert(Node *p,int x)
{
    if(p)
    {
        if(x>p->data)
        {
            last=p;
            RInsert(p->right,x);
        }
        else
        {
            last=p;
            RInsert(p->left,x);
        }
    }
    else
    {
        Node *t;
        t=new Node;
        t->data=x;
        t->left=NULL;
        t->right=NULL;
        if(root==NULL)
        {
            root=t;
        }
        else
        {
            if(x>last->data)
            {
                last->right=t;
            }
            else
            {
                last->left=t;
            }
        }
    }
}

void Tree:: Display(Node *p)
{
    if(p)
    {
        Display(p->left);
        cout<<p->data<<" ";
        Display(p->right);
    }
}

void Tree::LDisplay(Node *p)
{
    q.Enqueue(p);
    while(q.Qempty()!=true)
    {
        Node *t=q.Dequeue();
        cout<<t->data<<" ";
        q.Enqueue(t->left);
        q.Enqueue(t->right);
    }
}

int main()
{
    Tree t;
    t.RInsert(root,30);
    t.RInsert(root,20);
    t.RInsert(root,40);
    t.RInsert(root,10);
    t.RInsert(root,25);
    t.RInsert(root,35);
    t.RInsert(root,50);
    t.Display(root);
    cout<<"\n";
    t.LDisplay(root);
    cout<<"\n";
}