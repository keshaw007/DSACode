#include<iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum;
    sum=add(3,5);
    cout<<sum;
    return 0;
}