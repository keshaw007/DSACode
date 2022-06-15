#include<bits/stdc++.h>
using namespace std;
int fs(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fs(n-2)+(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fs(n);
}