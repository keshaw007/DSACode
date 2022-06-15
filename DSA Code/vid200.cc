#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *last=NULL;
};
Node *head=NULL;
class Creator : public Node
{
public:
    void Insert(int x)
    {
        Node *p;
        p=new Node;
        p->data=x;
        if(head==NULL)
        {
            p->next=NULL;
            last=p;
            head=p;
        }
        else
        {
            p->next=NULL;
            last->next=p;
            last=p;
        }
    }

    void Display(Node *p)
    {
        while(p)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }
};

// class Function : public Creator
// {
// public:
//     void Recursive(Node *q,Node *p)
//     {
//         if(p)
//         {
//             Recursive(p,p->next);
//             p->next=q;
//         }
//         else
//         {
//             head=q;
//         }
//     }
// };

// int main()
// {
//     Function link_list1;
//     link_list1.Insert(2);
//     link_list1.Insert(4);
//     link_list1.Insert(6);
//     link_list1.Insert(8);
//     link_list1.Display(head);
//     cout<<"\n";
//     link_list1.Recursive(NULL,head);
//     link_list1.Display(head);
// }
