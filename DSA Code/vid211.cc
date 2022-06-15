#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *head1 = NULL, *last = NULL;

void Insert(int x)
{
    struct Node *t;
    t = new Node;
    t->data = x;
    t->next = last->next;
    last->next = t;
    last = t;
}

void Display(struct Node *p)
{
    static int flag = 0;
    if (p != head1 || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        Display(p->next);
    }
    flag = 0;
}

int Count(struct Node *p)
{
    int counter=0;
    do
    {
        /* code */
        counter++;
        p=p->next;
    } while (/* condition */p!=head1);
    return counter;
}

void Input(int pos, int x)
{
    struct Node *p,*q;
    q=head1;
    p=new Node;
    p->data = x;
    if (pos != 0)
    {
        for (int i = 1; i < pos; i++)
        {
            q = q->next;
        }
        p->next=q->next;
        q->next=p;
    }
    else
    {
        struct Node *t;
        t=head1;
        int c=Count(head1);
        for(int i=1;i<c;i++)
        {
            t=t->next;
        }
        p->next=head1;
        head1=p;
        t->next=head1;
    }
}

int main()
{
    head1 = new Node;
    head1->data = 1;
    head1->next = head1;
    last = head1;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Insert(10);
    Display(head1);
    cout<<"\n";
    Input(0,25);
    Display(head1);
    cout<<"\n";
    Input(3,55);
    Display(head1);
    cout<<"\n";
    return 0;
}