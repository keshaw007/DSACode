#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head1=NULL,*head2=NULL,*head3=NULL,*a=NULL;

void Insert(struct Node *p,int x)
{
    struct Node *t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(p)
    {
        p->next=t;
        a=t;
    }
}

void Display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Concatenate(struct Node *r, struct Node *s)
{
    while(r->next!=NULL)
    {
        r=r->next;
    }
    r->next=s;
    head2=NULL;
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *t;
    if(p->data<=q->data)
    {
        head3=p;
        t=p;
        p=p->next;
        head3->next=NULL;
    }
    else
    {
        head3=q;
        t=q;
        q=q->next;
        head3->next=NULL;
    }

    while(p && q)
    {
        if(p->data<=q->data)
        {
            t->next=p;
            t=p;
            p=p->next;
            t->next=NULL;
        }
        else
        {
            t->next=q;
            t=q;
            q=q->next;
            t->next=NULL;
        }
    }
    if(p)
    {
        t->next=p;
    }
    if(q)
    {
        t->next=q;
    }
}

int main()
{
    head1=new Node;
    head1->data=2;
    head1->next=NULL;
    a=head1;
    Insert(a,4);
    Insert(a,6);
    Insert(a,8);
    Insert(a,10);
    Display(head1);
    cout<<"\n";
    head2=new Node;
    head2->data=1;
    head2->next=NULL;
    a=head2;
    Insert(a,3);
    Insert(a,5);
    Display(head2);
    cout<<"\n";
    Concatenate(head1,head2);
    Display(head1);
    cout<<"\n";
    Merge(head1,head2);
    Display(head3);
    cout<<"\n";
    return 0;
}