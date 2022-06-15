#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left=NULL;
    Node *right=NULL;
}*root=NULL,*last=NULL;

class Tree
{
public:
    void CreateBST();
    void DisplayBST(Node *p);
};

void RecursiveCall(Node *p, int x)
{
    if(p)
    {
        if(x>p->data)
        {
            last=p;
            p=p->right;
            RecursiveCall(p,x);
        }
        else
        {
            last=p;
            p=p->left;
            RecursiveCall(p,x);
        }
    }
    else
    {
        Node *temp;
        temp=new Node;
        temp->data=x;
        temp->left=NULL;
        temp->right=NULL;
        if(x>last->data)
        {
            last->right=temp;
        }
        else
        {
            last->left=temp;
        }
    }
}

void Tree::CreateBST()
{
    while(true)
    {
        cout<<"Enter NUmber :- ";
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        else
        {
            if(root==NULL)
            {
                Node *t;
                t=new Node;
                t->data=x;
                t->left=NULL;
                t->right=NULL;
                root=t;
            }
            else
            {
                RecursiveCall(root,x);
            }
        }
    }
}

void Tree::DisplayBST(Node *p)
{
    if(p)
    {
        DisplayBST(p->left);
        cout<<p->data<<" ";
        DisplayBST(p->right);
    }
}

// int main()
// {
//     Tree t;
//     t.CreateBST();
//     t.DisplayBST(root);
//     return 0;
// }