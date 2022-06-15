#include<bits/stdc++.h>
using namespace std;
// int sum_is(int n)
// {
//     static int sum=0;
//     if(n>0)
//     {
//         sum_is(n-1);
//         return sum+=n;
//     }
//     else
//     {
//         return sum;
//     }
// }

int sum_is(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sum_is(n-1)+n;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<sum_is(n);
}