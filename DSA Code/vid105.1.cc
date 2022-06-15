#include <bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[20];
    int size;
    int length;
};
int Bsearch(class Array arr, int l, int h, int key)
{
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key > arr.A[mid])
        {
            l = mid + 1;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
    }
    return -1;
}
int main()
{
    Array arr{{2, 4, 6, 8, 10, 11, 12, 15, 16, 17, 19, 20}, 20, 12};
    int l, h, key;
    l = 0;
    h = arr.length;
    cout << "Enter Number to be searched :- ";
    cin >> key;
    cout << Bsearch(arr, l, h, key);
}