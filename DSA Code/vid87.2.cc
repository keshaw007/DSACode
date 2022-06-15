#include <bits/stdc++.h>
using namespace std;
int main()
{
    int **p;
    p = new int*[3];
    for (int i = 0; i < 3; i++)
    {
        p[i] = new int[3];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << "\n";
    }
}