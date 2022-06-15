#include<bits/stdc++.h>
#include"vid218.cc"
using namespace std;

int Delete(int x)
{
    int n=Count(head);
    if(x>n || x<=0)
    {
        cout<<"Invalid Node NUmber\n";
        return 0;
    }
    struct Node *p=head;
    if(x>1)
    {
        for(int i=1;i<x;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
        {
            p->next->prev=p->prev;
        }
    }
    else
    {
        head=head->next;
        p->next->prev=NULL;
    }
    int z=p->data;
    delete p;
    return z;
}