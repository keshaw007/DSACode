#include<bits/stdc++.h>
using namespace std;
#include"vid292.cc"

int CountLeafNode(Node *p)
{
    if(p)
    {
        int x,y;
        x=CountLeafNode(p->left);
        y=CountLeafNode(p->right);
        if(p->left==NULL && p->right==NULL)
        {
            return x+y+1;
        }
        else
        {
            return x+y;
        }
    }
    return 0;
}

int main()
{
    Tree t;
    t.CreateTree();
    t.DisplayLevelOrder(root);
    cout<<"\n";
    cout<<CountLeafNode(root)<<"\n";
    return 0;
}