#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*last=NULL;

void Insert(int x)
{
    struct Node *t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(head==NULL)
    {
        head=last=t;
    }
    else
    {
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

void Sinsert(int x)
{
    struct Node *p;
    struct Node *q;
    p=head;
    q=NULL;
    struct Node *t;
    t=new Node;
    t->data=x;
    while(p)
    {
        if(x<=p->data)
        {
            if(p!=head)
            {
                t->next=q->next;
                q->next=t;
                break;
            }
            else
            {
                t->next=p;
                head=t;
                break;
            }
        }
        else
        {
            q=p;
            p=p->next;
        }
    }
    if(p==NULL)
    {
        if(head!=NULL)
        {
            t->next=NULL;
            q->next=t;
        }
        else
        {
            t->next=NULL;
            head=t;
        }
    }
}

// int main()
// {
//     Insert(3);
//     Insert(7);
//     Insert(9);
//     Insert(15);
//     Insert(20);

//     Display(head);
//     cout<<"\n";

//     Sinsert(12);
//     Display(head);
//     cout<<"\n";

//     Sinsert(22);
//     Display(head);
//     cout<<"\n";

//     Sinsert(2);
//     Display(head);
//     cout<<"\n";

//     Sinsert(1);
//     Display(head);
//     cout<<"\n";
//     return 0;
// }