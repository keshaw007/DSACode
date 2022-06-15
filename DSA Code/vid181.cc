#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=0;

void Create(int A[], int n)
{
    struct Node *t,*last;
    head = new Node;
    head->data=A[0];
    head->next=NULL;
    last=head;

    for(int i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int maximum(struct Node *p)
{
    int maximum=p->data;
    while(p)
    {
        if(p->data>maximum)
        {
            maximum=p->data;
            p=p->next;
        }
        else
        {
            p=p->next;
        }
    }
    return maximum;
}

int recmaximum(struct Node*p)
{
    static int maxi=0;
    if(p==0)
        return maxi;
    else
    {
        if(maxi<=p->data)
        {
            maxi=p->data;
            recmaximum(p->next);
        }
        else
        {
            recmaximum(p->next);
        }
        return maxi;
    }
}

int recmaximum2(struct Node*p)
{
    int x=0;
    if(p==0)
    {
        return x;
    }
    x=recmaximum2(p->next);
    return x>p->data?x:p->data;
}

int main()
{
    int A[]={5,8,9,20,78,80,8};
    Create(A,7);
    cout<<"Maximum element is "<<maximum(head);
    cout<<"\n"<<"Maximum element is "<<recmaximum(head);
    cout<<"\n"<<"Maximum element is "<<recmaximum2(head);
    return 0;
}