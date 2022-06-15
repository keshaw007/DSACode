#include<bits/stdc++.h>
using namespace std;
int Top =-1;
void push(int x, int arr[])
{
    if(Top<10)
    {
        arr[Top+1]=x;
        Top++;
    }
    else
    {
        cout<<"Stack Overflow"<<"\n";
    }
}

int pop(int arr[])
{
    int a=-1;
    if(Top>-1)
    {
        a=arr[Top];
        Top--;
    }
    else
    {
        cout<<"Stack Underflow\n";
    }
    return a;
}

int peek(int index,int arr[])
{
    if(index>-1 && index<=Top)
    {
        return arr[Top+1-index];
    }
    return -1;
}

bool is_stack_empty(int arr[])
{
    if(Top==-1)
    {
        return true;
    }
    return false;
}

bool is_stack_full(int arr[])
{
    if(Top==9)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[10];
    is_stack_empty(arr);
    is_stack_full(arr);
    push(10,arr);

    return 0;
}