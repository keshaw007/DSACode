#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node *next;
}*root;

struct Queue
{
    Node *front=NULL;
    Node *rear=NULL;
};

void enqueue(struct Queue *q,struct Node *r)
{
    struct Node *t;
    t=new Node;
    t=r;
    if(q->front==NULL)
    {
        q->front=t;
        q->rear=t;
    }
    else
    {
        q->rear->next=t;
        q->rear=t;
    }
}

bool is_empty_q(Queue q)
{
    if(q.front)
    {
        return false;
    }
    return true;
}

struct Node * dequeue(struct Queue *q)
{
    Node *t=NULL;
    if(q->front)
    {
        t=q->front;
        q->front=q->front->next;
    }
    else
    {
        cout<<"Queue is empty\n";
    }
    return t;
}


void Create_tree()
{
    struct Queue q;
    struct Node *temp,*p;
    int x;
    cout<<"Enter the value of root Node :- ";
    cin>>x;
    root=new Node;
    root->data=x;
    root->left=root->right=NULL;
    enqueue(&q,root);

    while(!is_empty_q(q))
    {
        p=dequeue(&q);
        cout<<"Enter value of Left Node of "<<p->data<<" :- ";
        cin>>x;
        if(x!=-1)
        {
            temp=new Node;
            temp->data=x;
            p->left=temp;
            temp->left=NULL;
            temp->right=NULL;
            enqueue(&q,temp);
        }
        cout<<"Enter value of Right Node of "<<p->data<<":- ";
        cin>>x;
        if(x!=-1)
        {
            temp=new Node;
            temp->data=x;
            p->right=temp;
            temp->left=NULL;
            temp->right=NULL;
            enqueue(&q,temp);
        }
    }
}

void preorder(struct Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}


int main()
{
    Create_tree();
    preorder(root);
    return 0;
}