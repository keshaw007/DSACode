#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size)
{
    q->size=size;
    q->front=-1;
    q->rear=-1;
    q->Q=new int[q->size];

}

void enqueue(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"Queue is full\n";
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q)
{
    int i;
    for(i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.Q[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    struct Queue q;
    int n;
    cout<<"Enter size of Queue :- ";
    cin>>n;
    create(&q, n);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    Display(q);
    cout<<dequeue(&q);
    cout<<"\n";
    Display(q);
    return 0;
}