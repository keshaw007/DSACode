#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node *next;
};

Node *root = NULL;

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void Enqueue(Node *p, Queue *q);
    Node *Dequeue(Queue *q);
    Node *isEmpty(Queue *q);
};

Node *Queue::isEmpty(Queue *q)
{
    return q->front;
}

void Queue::Enqueue(Node *p, Queue *q)
{
    Node *temp;
    temp = new Node;
    temp = p;
    if (front == NULL)
    {
        q->front = temp;
        q->rear = temp;
    }
    else
    {
        q->rear->next = temp;
        q->rear = temp;
    }
}

Node *Queue::Dequeue(Queue *q)
{
    Node *temp = NULL;
    if (q->front != NULL)
    {
        temp = q->front;
        q->front = q->front->next;
    }
    return temp;
}

class Stack
{
public:
    Node *stack_top;
    Stack()
    {
        stack_top=NULL;
    }
    void push(Node *p);
    Node *pop();
};

void Stack::push(Node *p)
{
    Node *t;
    t=new Node;
    t=p;
    t->next=stack_top;
    stack_top=t;
}

Node * Stack::pop()
{
    Node *t,*temp;
    t=stack_top;
    stack_top=stack_top->next;
    temp=t;
    return temp;
}

class CreateTree
{

public:
    CreateTree()
    {
        Node *left = NULL;
        Node *right = NULL;
        Node *next=NULL;
    }
    Queue q;
    void insert_in_tree();
    void lchild(Node *p);
    void rchild(Node *p);
    void print(Node *p);
};

void CreateTree::lchild(Node *p)
{
    cout << "Enter left child of " << p->data << " :- ";
    int x;
    cin >> x;
    if (x != -1)
    {
        Node *t;
        t=new Node;
        t->data = x;
        t->left = NULL;
        t->right = NULL;
        t->next=NULL;
        p->left = t;
        q.Enqueue(t, &q);
    }
}

void CreateTree::rchild(Node *p)
{
    cout << "Enter right child of " << p->data << " :- ";
    int x;
    cin >> x;
    if (x != -1)
    {
        Node *t;
        t=new Node;
        t->data = x;
        t->left = NULL;
        t->right = NULL;
        t->next=NULL;
        p->right = t;
        q.Enqueue(t, &q);
    }
}

void CreateTree::insert_in_tree()
{

    while (q.isEmpty(&q))
    {
        Node *temporary = NULL;
        temporary = q.Dequeue(&q);
        lchild(temporary);
        rchild(temporary);
    }
}

void preorder(Node *p, Stack *st)
{
    while(p!=NULL || st->stack_top!=NULL)
    {
        if(p)
        {
            cout<<p->data<<" ";
            st->push(p);
            p=p->left;
        }
        else
        {
            p=st->pop();
            p=p->right;
        }
    }
}

void Inorder(Node *p, Stack *st)
{
    while(p!=NULL || st->stack_top!=NULL)
    {
        if(p)
        {
            st->push(p);
            p=p->left;
        }
        else
        {
            p=st->pop();
            cout<<p->data<<" ";
            p=p->right;
        }
    }
}

int main()
{
    CreateTree T;
    Stack st;
    int x;
    cout << "Enter the value of root node :- ";
    cin >> x;
    Node *t;
    t = new Node;
    t->data = x;
    t->left = NULL;
    t->right = NULL;
    t->next=NULL;
    root = t;
    T.q.Enqueue(root, &T.q);
    T.insert_in_tree();
    preorder(root, &st);
    cout<<"\n";
    Inorder(root, &st);
    return 0;
}