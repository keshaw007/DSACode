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
    struct Element *A;
};

void Create(struct Sparse *s)
{
    int i;
    cout<<"Enter dimension :- ";
    cin>>s->m>>s->n;
    cout<<"Enter number of non-zero element in matrix :- ";
    cin>>s->num;
    s->A= new Element[s->num+1];
    cout<<"Enter non zero element of matrix \n";
    for(i=1;i<=s->num;i++)
    {
        cin>>s->A[i].i>>s->A[i].j>>s->A[i].x;
    }
}

void Add(struct Sparse *s1, struct Sparse *s2, struct Sparse *s3)
{
    s3->m=s1->m;
    s3->n=s1->n;
    s3->num=s1->num+s2->num;
    s3->A=new Element[s3->num+1];
    int i=1,j=1,k=1;
    while(i<=s1->num && j<=s2->num)
    {
        if(s1->A[i].i==s2->A[j].i)
        {
            if(s1->A[i].j<s2->A[j].j)
            {
                s3->A[k].i=s1->A[i].i;
                s3->A[k].j=s1->A[i].j;
                s3->A[k].x=s1->A[i].x;
                i++;
                k++;
            }
            else if(s1->A[i].j>s2->A[j].j)
            {
                s3->A[k].i=s2->A[j].i;
                s3->A[k].j=s2->A[j].j;
                s3->A[k].x=s2->A[j].x;
                j++;
                k++;
            }
            else
            {
                s3->A[k].i=s1->A[i].i;
                s3->A[k].j=s1->A[i].j;
                s3->A[k].x=s1->A[i].x+s2->A[j].x;
                i++;
                j++;
                k++;
            }
        }
        else if(s1->A[i].i<s2->A[j].i)
        {
            s3->A[k].i=s1->A[i].i;
            s3->A[k].j=s1->A[i].j;
            s3->A[k].x=s1->A[i].x;
            i++;
            k++;
        }
        else
        {
            s3->A[k].i=s2->A[j].i;
            s3->A[k].j=s2->A[j].j;
            s3->A[k].x=s2->A[j].x;
            j++;
            k++;
        }
    }
    for(;i<=s1->num;i++)
    {
        s3->A[k].x=s1->A[i].x;
        k++;
    }
    for(;j<=s2->num;j++)
    {
        s3->A[k].x=s2->A[j].x;
        k++;
    }
}

void Display(struct Sparse s)
{
    int i=1,j=1,k=1;
    for(i=1;i<=s.m;i++)
    {
        for(j=1;j<=s.n;j++)
        {
            if(i==s.A[k].i && j==s.A[k].j)
            {
                cout<<s.A[k].x<<" ";
                k++;
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
    struct Sparse s1,s2,s3;
    Create(&s1);
    Create(&s2);
    cout<<"\n1st matrix \n";
    Display(s1);
    cout<<"\n2nd matrix \n";
    Display(s2);
    Add(&s1, &s2, &s3);
    cout<<"\nsum of matrices \n";
    Display(s3);
    return 0;
}