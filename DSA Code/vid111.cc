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

/*void Reverse(class Array *arr)
{
    for(int i=0,j=arr->length-1;i<=j;i++,j--)
    {
        int temp;
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}*/

/*void Reverse( Array *arr)
{
    int B[arr->length] ;
    for (int i = arr->length - 1, j = 0; i >= 0, j < arr->length; i--, j++)
    {
        B[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
}*/

void Lshift(Array *arr)
{
    int x=arr->A[0];
    for(int i=1;i<arr->length;i++)
    {
        arr->A[i-1]=arr->A[i];
    }
    arr->A[arr->length-1]=x;
}

int main()
{
    Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    // Reverse(&arr);
    Lshift(&arr);
    Display(arr);
    return 0;
}