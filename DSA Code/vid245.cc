#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
} *top = NULL;

void push(int x)
{
    Node *t;
    t = new Node;
    if (t)
    {
        t->data = x;
        t->next = top;
        top = t;
    }
    else
    {
        cout << "Stack Overflow\n";
        delete t;
    }
}

char pop()
{
    Node *t = top;
    char x = '\0';
    if (top)
    {
        x = top->data;
        top = top->next;
        delete t;
        return x;
    }
    else
    {
        cout << "Satck Is Empty\n";
    }
    return x;
}

void Display()
{
    Node *t = top;
    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
}

string infix_to_postfix(string str)
{
    string postfix;
    int i = 0;
    while(str[i])
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if (top)
            {
                if(str[i]=='+' || str[i]=='-')
                {
                    while(true)
                    {
                        if(top->data=='+' || top->data=='-')
                        {
                            push(str[i]);
                            i++;
                            break;
                        }
                        else
                        {
                            postfix.push_back(pop());
                        }
                    }
                }
                else
                {
                    push(str[i]);
                    i++;
                }
            }
            else
            {
                push(str[i]);
                i++;
            }
        }
        else
        {
            postfix.push_back(str[i]);
            i++;
        }
    }
    while(top->next)
    {
        postfix.push_back(pop());
        top=top->next;
    }
    return postfix;
}

int main()
{
    string str;
    cin >> str;
    cout<<infix_to_postfix(str);
    return 0;
}