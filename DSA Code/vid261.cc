#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void Create(struct Queue *q,int size)
{
    q->size=size;
    q->front=0;
    q->rear=0;
    q->Q=new int[q->size];
}

void enqueue(struct Queue *q,int x)
{
    if((q->rear+1)%q->size == q->front)
    {
        cout<<"Queue is Full\n";
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
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
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q)
{
    int i=q.front+1;
    do
    {
        /* code */
        cout<<q.Q[i];
        i=(i+1)%q.size;
    } while (/* condition */i!=(q.rear+1)%q.size);
    
}

int main()
{
    struct Queue q;
    return 0;
}