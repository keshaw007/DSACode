#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
};

class Queue
{
private:
    int front;
    int rear;
    int size;
    Node **Q;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 10;
        Q = new Node *[size];
    }

    Queue(int size)
    {
        front = -1;
        rear = -1;
        this->size = size;
        Q = new Node *[this->size];
    }

    void enqueue(Node *x);
    Node *dequeue();
    int isEmpty() { return front == rear; }
};

void Queue::enqueue(Node *x)
{
    if (rear != size - 1)
    {
        rear++;
        Q[rear] = x;
    }
    else
    {
        cout << "Queue is FULL\n";
    }
}

Node *Queue::dequeue()
{
    Node *x = NULL;
    if (rear == front)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}

class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void CreateTree();
    void PreOrder(Node *p);
    void PostOrder(Node *p);
    void InOrder(Node *p);
    void LevelOrder(Node *p);
    int Height(Node *root);
};

void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(100);

    cout << "Enter root value :- ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter value of lchild Node of " << p->data << "  :- ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            p->lchild = t;
            t->lchild = NULL;
            t->rchild = NULL;
            q.enqueue(t);
        }
        cout << "Enter value of rchild Node of " << p->data << " :- ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            p->rchild = t;
            t->lchild = NULL;
            t->rchild = NULL;
            q.enqueue(t);
        }
    }
}

void Tree::InOrder(Node *p)
{
    if (p)
    {
        InOrder(p->lchild);
        cout << p->data << " ";
        InOrder(p->rchild);
    }
}
void Tree::PreOrder(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}
void Tree::PostOrder(Node *p)
{
    if (p)
    {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        cout << p->data << " ";
    }
}
void Tree::LevelOrder(Node *p)
{
    Queue q(100);
    cout << root->data;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            cout << root->lchild->data;
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
            cout << root->rchild->data;
            q.enqueue(root->rchild);
        }
    }
}

int Tree::Height(Node *root)
{
    int x = 0, y = 0;
    if (root == 0)
    {
        return 0;
    }
    x = Height(root->lchild);
    y = Height(root->rchild);
    if (x > y)
    {
        return x + 1;
    }
    else
    {
        return y + 1;
    }
    return 0;
}

int main()
{
    Tree t;
    t.CreateTree();
    t.PreOrder(t.root);
    return 0;
}