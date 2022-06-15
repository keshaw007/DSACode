#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}*head =NULL,*last=NULL;

void Display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void RevDisplay(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->prev;
    }
}

int Count(struct Node *p)
{
    int counter=0;
    while(p)
    {
        counter++;
        p=p->next;
    }
    return counter;
}

void Insert(int x)
{
    struct Node *t;
    t= new Node;
    t->data=x;
    if(head==NULL)
    {
        t->prev=NULL;
        t->next=NULL;
        head=t;
        last=t;
    }
    else
    {
        t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;
    }
}


// int main()
// {
//     Insert(6);
//     Insert(9);
//     Insert(3);
//     Insert(7);
//     Insert(2);


//     Display(head);
//     cout<<"\n";

//     RevDisplay(last);
//     cout<<"\n";

//     RandomInsert(3,25);
//     Display(head);
//     cout<<"\n";

//     RevDisplay(last);
//     cout<<"\n";

//     cout<<Delete(1)<<"\n";
//     Display(head);
//     cout<<"\n";

//     cout<<Delete(4)<<"\n";
//     Display(head);
//     return 0;
// }