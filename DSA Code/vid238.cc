#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *top;
};

class Create : public Node
{
public:
    Create()
    {
        top=NULL;
    }
    void push(int x);
    int pop();
    int peek(int pos);
    int stackTop();
    bool is_empty();
    bool is_full();
    void Display();
};

void Create :: push(int x)
{
    Node *t;
    t=new Node;
    if(t)
    {
        t->data=x;
        t->next=top;
        top=t;
    }
    else
    {
        cout<<"Stack Overflow\n";
        delete t;
    }
}

int Create ::pop()
{
    Node *t=NULL;
    int x=-1;
    if(top)
    {
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    else
    {
        cout<<"Empty Stack\n";
    }
    return x;
}

int Create :: peek(int pos)
{
    Node *t=NULL;
    int i;
    t=top;
    for(i=1;i<pos&&t;i++)
    {
        t=t->next;
    }
    if(t)
    {
        return t->data;
    }
    return -1;
}

int Create :: stackTop()
{
    if(top)
    {
        return top->data;
    }
    return -1;
}

bool Create :: is_empty()
{
    if(top)
    {
        return false;
    }
    return true;
}

bool Create :: is_full()
{
    Node *t;
    t=new Node;
    if(t)
    {
        return false;
    }
    return true;
}

void Create ::Display()
{
    Node *t=top;
    while(t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<"\n";
}