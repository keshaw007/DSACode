#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *head=NULL;

void Create(int A[], int n)
{
    struct Node *t,*last;
    head=new Node;
    head->data=A[0];
    head->next=NULL;
    last=head;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
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

void Insert(int pos,int x)
{
    struct Node *p,*t;
    if(pos<0)
    {
        cout<<"Insertion Not Possible<<\n";
    }
    else if(pos<1)
    {
        t=new Node;
        t->data=x;
        t->next=head;
        head=t;
    }
    else
    {
        t=new Node;
        t->data=x;
        p=head;
        for(int i=1;i<pos;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
// int main()
// {
//     int A[]={3,5,7,10,25,8,32,2};
//     Create(A,8);
//     Display(head);
//     cout<<"\n";
//     Insert(0,10);
//     Display(head);
//     cout<<"\n";
//     Insert(3,12);
//     Display(head);
//     cout<<"\n";
//     Insert(-1,12);
//     Display(head);
//     return 0;
// }