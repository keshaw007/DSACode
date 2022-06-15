#include<bits/stdc++.h>
using namespace std;
#include"vid300.cc"

void Searching(Node *p,int key)
{
    while(true)
    {
        if(p)
        {
            if(key==p->data)
            {
                cout<<"Key Found\n";
                break;
            }
            else if(key>p->data)
            {
                p=p->right;
            }
            else
            {
                p=p->left;
            }
        }
        else
        {
            cout<<"Key Not Found\n";
            break;
        }
    }
}

bool RecursiveSearch(Node *p, int key)
{
    if(p)
    {
        if(key==p->data)
        {
            return true;
        }
        else if(key>p->data)
        {
            return RecursiveSearch(p->right,key);
        }
        else
        {
            return RecursiveSearch(p->left,key);
        }
    }
    return false;
}

int main()
{
    Tree t;
    t.CreateBST();
    t.DisplayBST(root);
    cout<<"\n";
    Searching(root,10);
    Searching(root,50);
    Searching(root,35);
    Searching(root,55);
    Searching(root,5);
    cout<<"\n";
    if(RecursiveSearch(root,10)==true)
    {
        cout <<"Key Found\n";
    }
    else
    {
        cout<<"Key Not Found\n";
    }
    if(RecursiveSearch(root,50)==true)
    {
        cout<<"Key Found\n";
    } 
    else
    {
        cout<<"Key Not Found\n";
    }
    if(RecursiveSearch(root,35)==true)\
    {
        cout<<"Key Found\n";
    }
    else
    {
        cout<<"Key Not Found\n";
    }
    if(RecursiveSearch(root,55)==true)
    {
        cout<<"Key Found\n";
    }
    else
    {
        cout<<"Key Not Found\n";
    }
    if(RecursiveSearch(root,5)==true)
    {
        cout <<"Key Found\n";
    }
    else
    {
        cout<<"Key Not Found\n";
    }
    return 0;
}