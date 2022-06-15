#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int Top;
    int *arr;
};

bool is_stack_empty(struct Stack st)
{
    if(st.Top==-1)
    {
        return true;
    }
    return false;
}

bool is_stack_full(struct Stack st)
{
    if(st.Top==st.size-1)
    {
        return true;
    }
    return false;
}

void Push(int x, struct Stack *st)
{
    if(st->Top+1<st->size)
    {
        st->Top++;
        st->arr[st->Top]=x;
    }
    else
    {
        cout<<"Stack Overflow\n";
    }
}

int pop(struct Stack *st)
{
    int a=-1;
    if(st->Top>-1)
    {
        a=st->arr[st->Top];
        st->Top--;
    }
    else
    {
        cout<<"Stack Underflow\n";
    }
    return a;
}

int peek(int pos,struct Stack st)
{
    if(pos>-1 && pos<=st.Top)
    {
        return st.arr[st.Top+1-pos];
    }
    return -1;
}

int main()
{
    struct Stack st;
    cout<<"Enter Maximum size of stack :- ";
    cin>>st.size;
    st.arr=new int[st.size];
    st.Top=-1;
    Push(32,&st);
    Push(64,&st);
    Push(128,&st);
    cout<<peek(2,st);
    return 0;
}