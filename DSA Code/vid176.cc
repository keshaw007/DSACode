#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first=NULL;
void Create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
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
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        Display(p->next);
    }
}

void Displayrev(struct Node *p)
{
    if(p!=NULL)
    {
        Displayrev(p->next);
        cout<<p->data<<" ";
    }
}

int main()
{
    int A[]={8,3,7,12,9};
    Create(A,5);
    Display(first);
    cout<<"\n";
    Displayrev(first);
    return 0; 
}