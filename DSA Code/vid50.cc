#include<bits/stdc++.h>
using namespace std;
void print_number(int number)
{
    if(number>0)
    {
        print_number(number-1);
        cout<<number<<endl;
    }
}
int main()
{
    print_number(5);
    return 0;
}