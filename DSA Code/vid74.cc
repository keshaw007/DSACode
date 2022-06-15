#include<bits/stdc++.h>
using namespace std;
int c(int n, int r)
{
    if(n==r || r==0)
    {
        return 1;
    }
    return c(n-1,r)+c(n-1,r-1);
}
int main()
{
    int n,r;
    cin>>n >>r;
    if(r>n)
    {
        cout<<"INVALID INPUT";
    }
    else
    {
        cout<<c(n,r);
    }
}