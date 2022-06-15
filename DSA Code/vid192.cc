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

int counting(struct Node *p)
{
    int count =0;
    while(p)
    {
        count++;
        p=p->next;
    }
    return count;
}

void Delete(int pos)
{
    struct Node *p,*q;
    p=head;
    q=NULL;
    if(pos<1 || pos>counting(head))
    {
        cout<<"Invalid node number";
    }
    else
    {
        if(pos==1)
        {
            q=p;
            p=p->next;
            head=p;
            delete q;
        }
        else
        {
            for(int i=1;i<pos;i++)
            {
                q=p;
                p=p->next;
            }
            q->next=p->next;
            delete p;
        }
    }
}

int main()
{
    Insert(8);
    Insert(3);
    Insert(9);
    Insert(7);
    Insert(6);

    Display(head);
    cout<<"\n";

    // Delete(3);
    // Display(head);
    // cout<<"\n";

    Delete(1);
    Display(head);
    cout<<"\n";

    Delete(4);
    Display(head);
    cout<<"\n";

    // Delete(10);
    // Display(head);
    // cout<<"\n";
    return 0;
}