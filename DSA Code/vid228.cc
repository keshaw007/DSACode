#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int row;
    int col;
    int data;
    Node *next;
    Node *head;
};

class Creator : public Node
{
public:
    Creator()
    {
        head = NULL;
        row = col = 0;
    }

    void Insert(int r, int c, int x);
    void ShowLinkList(Node *p);
    void Display(Node *p, int m, int n);
};

void Creator::Insert(int r, int c, int x)
{
    Node *t, *last;
    t = new Node;
    t->col = c;
    t->data = x;
    t->row = r;
    t->next = NULL;
    if (head == NULL)
    {
        last = head = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

void Creator ::ShowLinkList(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
}

void Creator ::Display(Node *p, int m, int n)
{
    int i = 0, j = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            {
                if (p)
                    if (p->row == i && p->col == j)
                    {
                        cout << " " << p->data << " ";
                        p = p->next;
                    }
                    else
                    {
                        cout << " 0 ";
                    }
                else
                {
                    cout<<" 0 ";
                }
            }
        cout << "\n";
    }
}

int main()
{
    // int m,n;
    // cout<<"Entyer size of Matrix"<<"\n";
    // cin>>m >>n;
    Creator linkList1;
    linkList1.Insert(0, 4, 8);
    linkList1.Insert(1, 3, 7);
    linkList1.Insert(2, 0, 5);
    linkList1.Insert(2, 4, 9);
    linkList1.Insert(3, 5, 3);
    linkList1.Insert(4, 0, 6);
    linkList1.Insert(4, 3, 4);

    // linkList1.ShowLinkList(linkList1.head);

    linkList1.Display(linkList1.head, 5, 6);
    return 0;
}