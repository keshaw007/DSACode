#include<bits/stdc++.h>
using namespace std;
void funB(int n);
void funA(int n)
{
    if(n>0)
    {
        // cout<<n<<endl;
        funB(n-1);
        cout<<n<<endl;
    }
}
void funB(int n)
{
    if(n>0)
    {
        // cout<<n<<endl;
        funA(n/2);
        cout<<n<<endl;
    }
}
int main()
{
    funA(20);
}