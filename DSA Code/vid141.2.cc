#include <bits/stdc++.h>
using namespace std;
void swap(char a, char b)
{
}
void perm(char s[], int l, int h)
{
    if (l == h)
    {
        cout << s << "\n";
    }
    else
    {
        for (int i = l; i <= h; i++)
        {
                char c;
                c = s[l];
                s[l] = s[i];
                s[i] = c;
            perm(s, l + 1, h);
                char d;
                d = s[l];
                s[l] = s[i];
                s[i] = d;
        }
    }
}
int main()
{
    char s[] = "ABC";
    int h;
    for ( h = 0; s[h] != '\0'; h++)
    {
    }
    h--;
    perm(s, 0, h);
}