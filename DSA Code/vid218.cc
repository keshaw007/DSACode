#include<bits/stdc++.h>
#include"vid216.cc"
using namespace std;

void RandomInsert(int pos,int x)
{
    struct Node *p,*q=head;
    p=new Node;
    p->data=x;
    if(pos==0)
    {
        p->prev=NULL;
        p->next=head;
        head->prev=p;
        head=p;
    }
    else
    {
        for(int i=1;i<pos;i++)
        {
            q=q->next;
        }
        p->next=q->next;
        p->prev=q;
        if(q->next)
            q->next->prev=p;
        q->next=p;
    }
}