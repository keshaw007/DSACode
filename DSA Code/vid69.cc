#include <bits/stdc++.h>
using namespace std;
double expansion(double x, double n)
{
    double s = 1;
    for (int i = n; i > 0; i--)
    {
        s = 1 + (x / n) * s;
    }
    return s;
}
int main()
{
    cout << expansion(1.0, 10.0);
    return 0;
}