#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*last=NULL;

void Insert(int x)
{
    struct Node *p;
    p=new Node;
    p->data=x;
    if(head==NULL)
    {
        p->next=NULL;
        head=p;
        last=p;
    }
    else
    {
        p->next=NULL;
        last->next=p;
        last=p;
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

void checking_sorting(struct Node *p)
{
    int x;
    p=head;
    if(!p)
    {
        cout<<"Link list is empty";
        return;
    }
    x=p->data;
    p=p->next;
    while(p)
    {
        if(p->data>x)
        {
            x=p->data;
            p=p->next;
        }
        else
            break;
    }
    if(!p)
    {
        if(p!=head)
        {
            cout<<"Given link list is sorted";
        }
    }
    else
        cout<<"Link list is not sorted";
}

int main()
{
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    Display(head);
    cout<<"\n";
    checking_sorting(head);
    return 0;
}