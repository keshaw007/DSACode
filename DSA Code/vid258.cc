#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int size;
    int front;
    int rear;
    int *Q;
public:
    Queue()
    {
        size=10;
        front=-1;
        rear=-1;
        Q=new int[size];
    }
    Queue(int n)
    {
        size=n;
        front=-1;
        rear=-1;
        Q=new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void Display();
};


void Queue :: enqueue(int x)
{
    if(rear==size-1)
    {
        cout<<"Queue is full\n";
    }
    else
    {
        rear++;
        Q[rear]=x;
    }
}

int Queue :: dequeue()
{
    int x=-1;
    if(front==rear)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        front++;
        x=Q[front];
    }
    return x;
}

void Queue :: Display()
{
    int i;
    for(i=front+1;i<=rear;i++)
    {
        cout<<Q[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    cout<<"Enter size of Queue :- ";
    int n;
    cin>>n;
    Queue q(n);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.Display();
    cout<<q.dequeue();
    cout<<"\n";
    q.Display();
    return 0;
}