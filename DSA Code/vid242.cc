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

char pop()
{
    char c='\0';
    if (top)
    {
        Node *t;
        t = top;
        top = top->next;
        c=t->data;
        delete t;
    }
    return c;
}

bool is_Empty()
{
    if (top)
    {
        return false;
    }
    return true;
}

// int main()
// {
//     string str;
//     cin >> str;
//     int i = 0;
//     while (str[i])
//     {
//         if (str[i] == '(' || str[i] == '{' || str[i] == '[')
//         {
//             push(str[i]);
//             i++;
//         }
//         else if(str[i]==')' || str[i]=='}' || str[i]==']')
//         {
//             if(str[i]==')' && pop()=='(')
//             {
//                 i++;
//             }
//             else if(str[i]=='}' && pop()=='{')
//             {
//                 i++;
//             }
//             else if(str[i]==']' && pop()=='[')
//             {
//                 i++;
//             }
//             else
//             {
//                 cout<<"NON BALANCED PARENTHESIS\n";
//                 goto jump;
//             }
//         }
//         else
//         {
//             i++;
//         }
//     }
//     if (is_Empty() == false)
//     {
//         cout << "NON BALANCED PARENTHESIS\n";
//     }
//     else
//     {
//         cout << "BALANCED PARENTHESIS\n";
//     }
// jump:
//     return 0;
// }