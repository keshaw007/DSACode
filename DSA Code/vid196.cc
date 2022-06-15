#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*last=NULL;

void Insert(int x)
{
    struct Node *q;
    q=new Node;
    q->data=x;
    if(head==NULL)
    {
        q->next=NULL;
        head=q;
        last=q;
    }
    else
    {
        q->next=NULL;
        last->next=q;
        last=q;
    }
}

void Display(struct Node *p)
{
    p=head;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Duplicate_searcher(struct Node *p)
{
    struct Node *q;
    p=q=head;
    q=q->next;
    while(q)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

int main()
{
    Insert(3);
    Insert(5);
    Insert(5);
    Insert(8);
    Insert(8);
    Insert(8);
    Display(head);
    cout<<"\n";
    Duplicate_searcher(head);
    Display(head);
    return 0;
}