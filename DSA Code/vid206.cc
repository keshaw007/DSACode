#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL,*last;

void Insert(int x)
{
    struct Node *t;
    t=new Node;
    t->data=x;
    if(head==NULL)
    {
        t->next=NULL;
        head=t;
        last=t;
    }
    else
    {
        t->next=NULL;
        last->next=t;
        last=t;
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

bool isLoop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
        /* code */
    } while (/* condition */ p && q && p!=q);
    if(p==q)
    {
        return true;
    }
    return false;
    
}
int main()
{
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    struct Node *t1,*t2;
    t1=head->next->next;
    t2=head->next->next->next->next;
    t2->next=t1;
    cout<<isLoop(head);
    return 0;
}