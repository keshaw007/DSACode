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
    int counter = 0;
    do
    {
        /* code */
        counter++;
        p = p->next;
    } while (/* condition */ p != head1);
    return counter;
}

int Delete(int pos)
{
    if (pos <= 0 || pos > Count(head1))
    {
        cout << "Invalid Position"
             << "\n";
    }
    else
    {
        if (pos > 1)
        {
            struct Node *p = head1, *q = NULL;
            for (int i = 1; i < pos; i++)
            {
                q = p;
                p = p->next;
            }
            q->next=p->next;
            int c= p->data;
            delete p;
            return c;
        }
        else
        {
            struct Node *p=head1,*q=head1;
            while(p->next!=head1)
            {
                p=p->next;
            }
            q=q->next;
            p->next=q;
            int c=head1->data;
            delete head1;
            head1=q;
            return c;
        }
    }
    return -1;
}

int main()
{
    head1 = new Node;
    head1->data = 8;
    head1->next = head1;
    last = head1;
    Insert(3);
    Insert(9);
    Insert(6);
    Insert(12);
    Display(head1);
    cout<<"\n";
    cout<<Delete(1)<<"\n";
    Display(head1);
    cout<<"\n";
    cout<<Delete(3)<<"\n";
    Display(head1);
    cout<<"\n";
    return 0;
}