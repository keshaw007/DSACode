#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next=NULL;
    Node *last=NULL;
};
Node  *head=NULL;
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

    void Display(Node *p)
    {
        while(p)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }

    int Count(Node *p)
    {
        int count=0;
        while(p)
        {
            count++;
            p=p->next;
        }
        return count;
    }
};

// class Function : public Creator
// {
// public:
//     void Reverse(Node *p)
//     {
//         int number=Count(head);
//         p=head;
//         int arr[number];
//         int i;
//         for(i=0;i<number;i++)
//         {
//             arr[i]=p->data;
//             p=p->next;
//         }
//         p=head;
//         for(i=number-1;i>=0;i--)
//         {
//             p->data=arr[i];
//             p=p->next;
//         }
//     }
// };

// int main()
// {
//     Function linklist1;
//     linklist1.Insert(2);
//     linklist1.Insert(4);
//     linklist1.Insert(6);
//     linklist1.Insert(8);

//     linklist1.Display(head);
//     cout<<"\n";
//     linklist1.Reverse(head);
//     linklist1.Display(head);
//     return 0;
// }