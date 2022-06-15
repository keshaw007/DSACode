
// NOT COMPLETE
// TWO STACK WILL BE USED

#include<bits/stdc++.h>
#include"vid226.cc"
using namespace std;

void MakingIntersection(Node *p, Node *q)
{
    while(q->next)
    {
        q=q->next;
    }
    p=p->next->next->next->next;
    q->next=p;
}

/*int CommonNode(Node *p, Node *q)
{
    while(p)
    {
        push(&stk1,p);
    }
    while(q)
    {
        push(&stk2,q);
    }

    while(stackTop(stk1)==stackTop(stk2))
    {
        p=pop(&stk1);pop(&stk2);
    }
    return p->data;
}*/

int main()
{
    Creator linkList1,linkList2;
    linkList1.Insert(8);
    linkList1.Insert(6);
    linkList1.Insert(3);
    linkList1.Insert(9);
    linkList1.Insert(10);
    linkList1.Insert(4);
    linkList1.Insert(2);
    linkList1.Insert(12);
    linkList2.Insert(20);
    linkList2.Insert(30);
    linkList2.Insert(40);

    linkList1.Display(linkList1.head);
    linkList2.Display(linkList2.head);

    MakingIntersection(linkList1.head, linkList2.head);
    linkList1.Display(linkList1.head);
    linkList2.Display(linkList2.head);

    return 0;
}