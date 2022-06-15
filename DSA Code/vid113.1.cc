#include <bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;
};
void Display(Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

void Sinsert(Array *arr, int x)
{
    if (arr->length == arr->size)
    {
        return;
    }
    else
    {
        for (int i = arr->length - 1; i >= 0; i--)
        {
            if (x > arr->A[i])
            {
                arr->A[i + 1] = x;
                arr->length++;
                break;
            }
            else
            {
                arr->A[i + 1] = arr->A[i];
            }
        }
    }
}

/*bool isSorted(Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return false;
        }
    }
    return true;
}*/
int main()
{
    Array arr = {{2, 4, 6, 8, 10}, 10, 5};
    int n;

    /*cout<<"Enter Number to insert in sorted array :- ";
    cin>>n;
    Sinsert(&arr,n);*/

    // cout<<isSorted(arr)<<"\n";
    Display(arr);
    return 0;
}