#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    p=new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=i;
    }
    int *q;
    q= new int[10];
    for(int i=0;i<10;i++)
    {
        if(i>=5)
        {
            q[i]=i;
        }
        else
            q[i]=p[i];
    }
    delete []p;
    p=q;
    q=NULL;
    delete []q;
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<" ";
    }
}