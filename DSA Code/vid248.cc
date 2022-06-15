#include<bits/stdc++.h>
#include"vid242.cc"


int pre(char x)
{
    if(x=='+' || x=='-')
    {
        return 1;
    }
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}

int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
        return 0;
    else
        return 1;
}

char * InToPost(char *infix)
{
    char *postfix;
    int i=0,j=0;
    int len=strlen(infix);
    postfix=(char *)malloc((len+2)*sizeof(char));
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
            postfix[j++]=infix[i++];
        else
        {
            if(pre(infix[i])>pre(top->data))
                push(infix[i++]);
            else
            {
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL)
        postfix[j++]=pop();
    postfix[j]='\0';
    return postfix;
}

int main()
{
    char *infix="a+b*c-d/e";
    push('#');
    char *postfix=InToPost(infix);
    cout<<postfix;
    return 0;
}