#include<bits/stdc++.h>
using namespace std;

struct Matrix
{
    int *A;
    int n;
};
void Set(struct Matrix *m, int i, int j, int x)
{
    if(i>=j)
    {
        m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
    }
}

int Get(struct Matrix m, int i, int j)
{
    if(i>=j)
    {
        return m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j];
    }
    return 0;
}

void Display(struct Matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            if(i<=j)
            {
                printf("%d ", m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    struct Matrix m;
    cout<<"Enter dimension :- ";
    cin>>m.n;
    m.A=new int[((m.n)*(m.n+1))/2];
    cout<<"Enter all elements :- ";
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            int x;
            cin>>x;
            Set(&m,i,j,x);
        }
    }
    return 0;
}