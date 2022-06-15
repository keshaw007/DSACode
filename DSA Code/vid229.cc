#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    int power;
    Node *next;
};

class Creator : public Node
{
public:
    Node *head;
    Creator()
    {
        head=NULL;
    }

    void createPolynomial(int x,int y);
    void Display(Node *p);
};

void Creator :: createPolynomial(int data, int power)
{
    Node *t,*last;
    t=new Node;
    t->data=data;
    t->power=power;
    t->next=NULL;
    if(head==NULL)
    {
        last=head=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}

void Creator :: Display(Node *p)
{
    while(p)
    {
        cout<<p->data<<"*x^"<<p->power<<" +"<<" ";
        p=p->next;
    }
    cout<<"\n";
}

int Evaluate(Node *p,int x)
{
    int ans=0;
    while(p)
    {
        ans=ans+p->data*pow(x,p->power);
        p=p->next;
    }
    return ans;
}

Node * Add(Node *p, Node *q)
{
    Creator polynomial3;
    while(p && q)
    {
        if(p->power>q->power)
        {
            polynomial3.createPolynomial(p->data,p->power);
            p=p->next;
        }
        else if(p->power<q->power)
        {
            polynomial3.createPolynomial(q->data,q->power);
            q=q->next;
        }
        else
        {
            polynomial3.createPolynomial(p->data+q->data,p->power);
            p=p->next;
            q=q->next;
        }
    }
    while(p)
    {
        polynomial3.createPolynomial(p->data,p->power);
        p=p->next;
    }
    while(q)
    {
        polynomial3.createPolynomial(q->data,q->power);
        q=q->next;
    }
    return polynomial3.head;
}

Node * Multiply(Node *p, Node *q)
{
    Creator polynomail4;
    Node *t;
    while(p)
    {
        t=q;
        while(t)
        {
            polynomail4.createPolynomial(p->data*t->data,p->power+t->power);
            t=t->next;
        }
        p=p->next;
    }
    Node *a,*b,*c;
    a=polynomail4.head;
    while(a)
    {
        b=a->next;
        c=a;
        while(b)
        {
            if(a->power!=b->power)
            {
                b=b->next;
                c=c->next;
            }
            else
            {
                a->data=a->data+b->data;
                c->next=b->next;
                b=b->next;
            }
        }
        a=a->next;
    }
    return polynomail4.head;
}

int main()
{
    Creator Polynomial1,Polynomial2;
    Polynomial1.createPolynomial(4,3);
    Polynomial1.createPolynomial(9,2);
    Polynomial1.createPolynomial(6,1);
    Polynomial1.createPolynomial(7,0);

    cout<<Evaluate(Polynomial1.head,1);
    // Polynomial2.createPolynomial(16,5);
    // Polynomial2.createPolynomial(6,2);
    // Polynomial1.Display(Polynomial1.head);
    // Polynomial1.Display(Polynomial2.head);
    // Polynomial1.Display(Add(Polynomial1.head,Polynomial2.head));
    // Polynomial1.Display(Multiply(Polynomial1.head,Polynomial2.head));
    return 0;
}