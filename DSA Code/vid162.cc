#include<bits/stdc++.h>
using namespace std;

struct Element
{
    int i;
    int j;
    int x;
};

struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *ele;
};

void Create(struct Sparse *s)
{
    cout<<"Enter dimensions :- ";
    cin>>s->m>>s->n;
    cout<<"Enter number of non zero element :- ";
    cin>>s->num;
    s->ele= new Element[s->num];
    cout<<"Enter all non zero element :- \n";
    for(int i=0;i<s->num;i++)
    {
        cin>>s->ele[i].i>>s->ele[i].j>>s->ele[i].x;
    }
}

void Display( struct Sparse s)
{
    cout<<"\n";
    int i=0,j=0,k=0;
    for(i=0;i<s.m;i++)
    {
        for(j=0;j<s.n;j++)
        {
            if(i==s.ele[k].i && j==s.ele[k].j)
            {
                cout<<s.ele[k++].x<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    struct Sparse s;
    Create (&s);
    Display(s);
    return 0;
}