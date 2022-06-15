#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

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
struct Node * Search_link(struct Node *p,int key)
{
    struct Node *q;
    while(p)
    {
        if(key==p->data)
        {
            cout<< (int)p<<"\n";
            q->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        else
        {
            q=p;
            p=p->next;
        }
    }
    return NULL;
}

void Display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int A[]={3,5,7,10,25,8,32,2};
    Create(A,8);
    Display(head);
    cout<<"\n";
    cout<<(int)head<<"\n";
    cout<< (int) Search_link(head,25)<<"\n";
    Display(head);
    return 0;
}