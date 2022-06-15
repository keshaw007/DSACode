#include<bits/stdc++.h>
using namespace std;

int counter=0;
struct Node
{
    int data;
    struct Node *next;
} *first=NULL;

void Create(int A[], int n)
{
    struct Node *last,*t;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    int i=1;
    while(i<n)
    {
        t= new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        i++;
    }
}

int number(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}

void recnumber(struct Node*p)
{
    if(p!=NULL)
    {
        counter++;
        recnumber(p->next);
    }
}
int main()
{
    int A[]={8,3,7,12,9};
    Create(A, 5);
    cout<<number(first);
    cout<< "\n";
    recnumber(first);
    cout<<counter;
    return 0;
}