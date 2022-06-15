#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
} *top = NULL;

void push(char c)
{
    Node *t;
    t = new Node;
    if (t)
    {
        t->data = c;
        t->next = top;
        top = t;
    }
    else
    {
        cout << "Stack Overflow\n";
    }
}

bool pop()
{
    if (top)
    {
        Node *t;
        t = top;
        top = top->next;
        delete t;
        return true;
    }
    return false;
}

bool is_Empty()
{
    if (top)
    {
        return false;
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    int i = 0;
    while (str[i])
    {
        if (str[i] == '(')
        {
            push(str[i]);
            i++;
        }
        else if (str[i] == ')')
        {
            if (pop() == true)
                i++;
            else
            {
                cout << "Parenthesis not matched\n";
                goto jump;
            }
        }
        else
        {
            i++;
        }
    }
    if (is_Empty() == false)
    {
        cout << "NON BALANCED PARENTHESIS\n";
    }
    else
    {
        cout << "BALANCED PARENTHESIS\n";
    }
jump:
    return 0;
}