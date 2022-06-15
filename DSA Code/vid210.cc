#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*last=NULL;
void Insert(int x)
{
    struct Node *t;
    t=new Node;
    t->data=x;

        t->next=last->next;
        last->next=t;
        last=t;

}

// void Display(struct Node *p)
// {
//     do
//     {
//         /* code */
//         cout<<p->data<<" ";
//         p=p->next;
//     } while (/* condition */p!=head);
    
// }

void Display(struct Node *p)
{
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        cout<<p->data<<" ";
        flag=1;
        Display(p->next);
    }
    flag=0;
}

int main()
{
    head=new Node;
    head->data=1;
    head->next=head;
    last=head;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Insert(10);
    Display(head);
    return 0;
}