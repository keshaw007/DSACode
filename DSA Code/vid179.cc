#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void Create(int A[],int n)
{
    struct Node *t,*last;
    head= new Node;
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

int sum(struct Node *p)
{
    int sum=0;
    while(p)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int recsum(struct Node *p)
{
    if(p)
    {
        return p->data+recsum(p->next);
    }
    else{
        return 0;
    }
}

int main()
{
    int A[]={10,15,5,8,20,25};
    Create(A, 6);
    cout<<sum(head);
    cout<<"\n"<<recsum(head);
    return 0;
}