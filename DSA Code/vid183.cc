#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void Create(int A[], int n)
{
    struct Node *last, *t;
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (int i = 0; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

bool Search(struct Node *p, int x)
{
    while (p)
    {
        if (x == p->data)
        {
            cout << (int)p << "\n";
            return true;
            break;
        }
        else
        {
            p = p->next;
        }
    }
    return false;
}

Node *recsearch(struct Node *p, int x)
{
    if (p == NULL)
        return NULL;
    if (x == p->data)
        return p;
    return recsearch(p->next, x);
}

int main()
{
    int A[] = {8, 3, 7, 12, 9};
    Create(A, 5);
    if (Search(head, 20) == true)
    {
        cout << "Element is present\n";
    }
    else
    {
        cout << "Element is not present\n";
    }
    cout << (int)recsearch(head, 20);
    return 0;
}