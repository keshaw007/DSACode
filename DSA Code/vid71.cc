#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
    int factotial =1;
    if(a==0)
    {
        return factotial;
    }
    for(int i=1;i<=a;i++)
    {
        factotial=factotial*i;
    }
    return factotial;
}
double expansion(int x, int n)
{
    double s=0;
    for(int i=0;i<=n;i++)
    {
        s=s+1ll*pow(x,i)/fact(i);
    }
    return s;
}
int main()
{
    int x,n;
    cin>>x >>n;
    cout<<expansion(x,n);
    return 0;
}