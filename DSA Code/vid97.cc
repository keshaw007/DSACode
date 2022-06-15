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
    int i;
    cout << "Elements are \n";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
void append(class Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length = arr->length + 1;
    }
    else if (arr->length == arr->size)
    {
        cout << "Array is Already full";
    }
    else
    {
        cout << "Array Overflow";
    }
}
void insert(class Array *arr, int index, int value)
{
    if (index <= arr->size && index>=0)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index]=value;
        arr->length=arr->length+1;
    }
    else
    {
        cout<<"We can't insert element";
    }
}
int main()
{
    Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr);
    int x;
    cout << "\nEnter element to insert :- ";
    cin >> x;
    append(&arr, x);
    Display(arr);
    int index, value;
    cout<<"\nEnter value and index at which element to be inserted :- ";
    cin >> index >> value;
    insert(&arr, index, value);
    Display(arr);
    return 0;
}