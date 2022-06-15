#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front=NULL;
    struct Node *rear=NULL;
};

void enqueue(struct Queue *q,int x)
{
    struct Node *t;
    t=new Node;
    if(t)
    {
        t->data=x;
        t->next=NULL;
        if(q->front==NULL)
        {
            q->rear=t;
            q->front=t;
        }
        else
        {
            q->rear->next=t;
            q->rear=t;
        }
    }
    else
    {
        cout<<"Queue is full\n";
    }
}

int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==NULL)
    {
        cout<<"Queue is Empty\n";
    }
    else
    {
        struct Node *t;
        t=q->front;
        x=q->front->data;
        q->front=q->front->next;
        delete t;
    }
    return x;
}

void Display(struct Queue q)
{
    struct Node *t;
    t=q.front;
    while(t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<"\n";
}

int main()
{
    struct Queue q;
    enqueue(&q,8);
    enqueue(&q,3);
    enqueue(&q,9);
    enqueue(&q,4);
    Display(q);
    cout<<dequeue(&q)<<"\n";
    Display(q);
}