#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *head;
};
class Stack : public Node
{
public:
    Stack()
    {
        next=NULL;
        head=NULL;
    }
    Node *top=NULL;
    void push(int x);
    int pop();
    bool is_empty();
};

void Stack::push(int x)
{
    Node *t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(head)
    {
        top->next=t;
        top=t;
    }
    else
    {
        head=t;
        top=t;
    }
}

int Stack::pop()
{
    Node *p=head,*t;
    int x=-1;
    t=top;
    if(top)
    {
        if(top==head)
        {
            x=top->data;
            top=head=NULL;
        }
        else
        {
            x=top->data;
            while(p->next->next)
            {
                p=p->next;
            }
            top=p;
            top->next=NULL;
            delete t;
        }
    }
    else
    {
        cout<<"Stack is Empty\n";
    }
    return x;
}

bool Stack:: is_empty()
{
    if(top)
    {
        return false;
    }
    return true;
}

void Queue_Insert(Stack *s, int x)
{
    s->push(x);
}

int Queue_Delete(Stack *s1, Stack *s2)
{  
    if(s2->top==NULL)
    {
        while(s1->top)
        {
            int n=s1->pop();
            s2->push(n);
        }
    }
    return s2->pop();
}

void Queue_Display(Stack s1, Stack s2)
{
    Node *p,*q;
    p=s1.head;
    q=s2.head;
    cout<<"Elements of stack s1 is as follows :- "<<"\n";
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
    cout<<"Elements of stack s2 is as follows :- "<<"\n";
    while(q)
    {
        cout<<q->data<<" ";
        q=q->next;
    }
    cout<<"\n";
}

int main()
{
    Stack s1,s2;
    Queue_Insert(&s1,6);
    Queue_Insert(&s1,3);
    Queue_Insert(&s1,9);
    Queue_Display(s1,s2);
    cout<<Queue_Delete(&s1,&s2)<<"\n";
    cout<<Queue_Delete(&s1,&s2)<<"\n";
    Queue_Display(s1,s2);
    return 0;
}
