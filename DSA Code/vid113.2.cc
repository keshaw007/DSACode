#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[20];
    int size;
    int  length;
};

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Display(Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

void Seperate(Array *arr)
{
    int i=0,j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}
int main()
{
    Array arr={{-105,15,-6,20,-65,21,43,-55,-86},20,9};
    Seperate(&arr);
    Display(arr);
    return 0;
}