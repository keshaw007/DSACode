#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Creator : public Node
{
public:
    Node *head;
    Creator()
    {
        head=NULL;
    }
    void Insert(int x);
    void Display(Node *p);
    int TotalNoOfNode(Node *p);
    int M1MiddleNode(Node *p);
    int M2MiddleNode(Node *p);
};

void Creator :: Insert(int x)
{
    Node *t,*last;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(head==NULL)
    {
        last=head=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}

void Creator :: Display(Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}

int Creator :: TotalNoOfNode(Node *p)
{
    int count=0;
    while(p)
    {
        count++;
        p=p->next;
    }
    return count;
}

int Creator :: M1MiddleNode(Node *p)
{
    int n=TotalNoOfNode(head);
    for(int i=1;i<=n/2;i++)
    {
        p=p->next;
    }
    return p->data;
}

int Creator :: M2MiddleNode(Node *p)
{
    Node *q=NULL;
    q=p;
    while(q)
    {
        q=q->next;
        if(q)
        {
            q=q->next;
            p=p->next;
        }
        else
        {
            break;
        }
    }
    return p->data;
}

// int main()
// {
//     Creator linkList1;
//     linkList1.Insert(8);
//     linkList1.Insert(6);
//     linkList1.Insert(3);
//     linkList1.Insert(9);
//     linkList1.Insert(10);
//     linkList1.Insert(4);
//     linkList1.Insert(2);
//     linkList1.Insert(12);

//     linkList1.Display(linkList1.head);
//     cout<<linkList1.M1MiddleNode(linkList1.head)<<"\n";
//     cout<<linkList1.M2MiddleNode(linkList1.head)<<"\n";
// }