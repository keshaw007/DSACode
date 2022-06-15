#include<bits/stdc++.h>
#include"vid220.cc"
using namespace std;

void Reverse(struct Node *p)
{
    struct Node *temp;
    while(p)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
        {
            head=p;
        }
    }
}

int main()
{
    Insert(6);
    Insert(9);
    Insert(3);
    Insert(7);
    Insert(2);
    Display(head);
    cout<<"\n";
    Reverse(head);
    Display(head);
    cout<<"\n";
    return 0;
}