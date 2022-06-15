#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    struct Node *rchild;
    int data;
} *root = NULL;

struct Queue
{
    int size;
    int front;
    int rear;
    Node **Q;
};

void Create(struct Queue *q, int size)
{
    q->size = size;
    q->front = 0;
    q->rear = 0;
    q->Q = (Node **)malloc(q->size * sizeof(Node *));
}

void enqueue(struct Queue *q, Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue is Full\n";
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

Node *dequeue(struct Queue *q)
{
    Node *x = NULL;
    if (q->front == q->rear)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}

void Create()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    Create(&q, 100);

    cout << "Enter root value :- ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        cout << "Enter value of lchild Node of "<<p->data<<"  :- ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            p->lchild = t;
            t->lchild = NULL;
            t->rchild = NULL;
            enqueue(&q, t);
        }
        cout << "Enter value of rchild Node of "<<p->data<<" :- ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            p->rchild = t;
            t->lchild = NULL;
            t->rchild = NULL;
            enqueue(&q, t);
        }
    }
}

void preorder(struct Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        cout<<p->data<<" ";
        Inorder(p->rchild);
    }
}

void postorder(struct Node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}

int main()
{
    Create();
    preorder(root);
    cout<<"\n";
    Inorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    return 0;
}