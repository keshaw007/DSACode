#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, k = 10;
    int j = n - 1;
    while (i < n / 2,j>i)
    {
        if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
            j = n - 1;
        }
        else
        {
            if (i != j)
            {
                cout << arr[i] << " " << arr[j] << "\n";
                i++;
                j = n - 1;
            }
            else
            {
                i++;
                j=n-1;
            }
        }
    }
    return 0;
}