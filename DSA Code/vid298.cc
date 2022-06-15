#include<bits/stdc++.h>
using namespace std;
#include"vid292.cc"

int AllNodeCount(Node *p)
{
    int x,y;
    if(p)
    {
        x=AllNodeCount(p->left);
        y=AllNodeCount(p->right);
        return x+y+1;
    }
    return 0;
}

int TwoDegreeNodeCount(Node *p)
{
    int x,y;
    if(p)
    {
        x=TwoDegreeNodeCount(p->left);
        y=TwoDegreeNodeCount(p->right);
        if(p->left && p->right)
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

int HeightCount(Node *p)
{
    int x,y;
    if(p)
    {
        x=HeightCount(p->left);
        y=HeightCount(p->right);
        if(x>y)
        {
            return x+1;
        }
        else
        {
            return y+1;
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
    cout<<AllNodeCount(root)<<"\n";
    cout<<TwoDegreeNodeCount(root)<<"\n";
    cout<<HeightCount(root)<<"\n";
}