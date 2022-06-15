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

void Search_link(struct Node *q,int key)
{
    while(q)
    {
        if(q->data==key)
        {
            int temp;
            temp=head->data;
            head->data=q->data;
            q->data=temp;
            cout<<q;
            break;
        }
        else
        {
            q=q->next;
        }
    }
   cout<<"0";
}

void Recsearch_link(struct Node *p,int key)
{
    if(p!=NULL)
    {
        if(p->data==key)
        {
            int temp;
            temp=head->data;
            head->data=p->data;
            p->data=head->data;
            cout<<p;
        }
        else
            Recsearch_link(p->next, key);
    }
    else
        cout<<"0";
}
int main()
{
    int A[]={8,3,7,12,9};
    Create(A,5);
    Search_link(head,12);
    cout<<"\n";
    Recsearch_link(head,12);
    return 0;
}