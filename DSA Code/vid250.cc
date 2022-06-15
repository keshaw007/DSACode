#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
}*top;

void push(double x)
{
    Node *t;
    t=new Node;
    t->data=x;
    t->next=top;
    top=t;
}

int pop()
{
    Node *t;
    int x;
    if(top)
    {
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    return x;
}

int Evaluation(string str)
{
    int i=0,a=0,b=0;
    double ans=0;
    while(str[i])
    {
        if(str[i]=='+')
        {
            b=pop();
            a=pop();
            ans=a+b;
            push(ans);
            i++;
        }
        else if(str[i]=='-')
        {
            b=pop();
            a=pop();
            ans=a-b;
            push(ans);
            i++;
        }
        else if(str[i]=='*')
        {
            b=pop();
            a=pop();
            ans=a*b;
            push(ans);
            i++;
        }
        else if(str[i]=='/')
        {
            b=pop();
            a=pop();
            ans=a/b;
            push(ans);
            i++;
        }
        else
        {
            push((int)str[i]-48);
            i++;
        }
    }
    return pop();
}

int main()
{
    string str="234*+82/-";
    cout<<Evaluation(str);
    return 0;
}