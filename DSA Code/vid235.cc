#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    struct Node *p;
    p=new Node;
    if(p)
    {
        p->data=x;
        p->next=top;
        top=p;
    }
    else
    {
        cout<<"Stack Overrflow\n";
    }
}

int pop()
{
    int x=-1;
    if(top)
    {
        struct Node *p;
        p=top;
        top=top->next;
        x=p->data;
        delete p;
    }
    else
    {
        cout<<"Stack Underflow\n";
    }
    return x;
}

bool isempty()
{
    if(top==NULL)
    {
        return true;
    }
    return false;
}

bool isfull()
{
    struct Node *p;
    p=new Node;
    if(p)
    {
        return false;
    }
    delete p;
    return true;
}
void Display()
{
    struct Node *p;
    p=top;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}

int count(struct Node *p)
{
    int counter=0;
    while(p)
    {
        counter++;
        p=p->next;
    }
    return counter;
}

int peek(int pos)
{
    struct Node *p=top;
    for(int i=1;p&&i<pos;i++)
    {
        p=p->next;
    }
    if(p)
    {
        return p->data;
    }
    else
    {
        cout<<"Invalis position\n";
    }
    return -1;
}

int stacktop()
{
    if(top)
    {
        return top->data;
    }
    return -1;
}

int main()
{
    push(5);
    push(10);
    push(15);
    push(20);
    Display();
    cout<<pop()<<"\n";
    Display();
    cout<<peek(2)<<"\n";
    cout<<peek(10)<<"\n";
    return 0;
}