#include<bits/stdc++.h>
#include<iostream>
#include"vid198.cc"
using namespace std;

class Function : public Creator
{
public:
    void Reverse(Node *p)
    {
        Node *q,*r;
        p=head;
        q=r=NULL;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
    }
};

int main()
{
    Function link_list1;
    link_list1.Insert(2);
    link_list1.Insert(4);
    link_list1.Insert(6);
    link_list1.Insert(8);
    link_list1.Display(head);
    cout<<"\n";
    link_list1.Reverse(head);
    link_list1.Display(head);
}