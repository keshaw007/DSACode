#include <bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;
};
void Display(class Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
int Delete(class Array *arr, int x)
{
    int deleted_element = 0;
    if (x >= 0 && x <= arr->length)
    {
        deleted_element = arr->A[x];
        for (int i = x; i < arr->length; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
    return deleted_element;
}
int main()
{
    Array arr{{2, 3, 4, 5, 6}, 10, 5};
    Display(arr);
    int index;
    cout << "\nEnter index number to be deleted :- ";
    cin >> index;
    cout << Delete(&arr, index) << "\n";
    Display(arr);
    return 0;
}