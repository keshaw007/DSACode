#include<bits/stdc++.h>
#include"vid187.cc"
using namespace std;

struct Node *last=NULL;
void LInsert(int x)
{
    struct Node *t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(head==NULL)
    {
        head=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
int main()
{
    LInsert(5);
    LInsert(10);
    LInsert(515);
    Display(head);
    return 0;
}