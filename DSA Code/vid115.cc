#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10],size,length;
};
void Merging(Array *arr1, Array *arr2)
{
    int *c,i=0,j=0,k=0;
    c=new int[arr1->length+arr2->length];
    while(i<arr1->length&&j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            c[k]=arr1->A[i];
            k++;
            i++;
        }
        else
        {
            c[k]=arr2->A[j];
            k++;
            j++;
        }
    }
    for(;i<arr1->length;i++,k++)
    {
        c[k]=arr1->A[i];
    }
    for(;j<arr2->length;j++,k++)
    {
        c[k]=arr2->A[j];
    }
    for(int k=0;k<arr1->length+arr2->length;k++)
    {
        cout<<c[k]<<" ";
    }
}
int main()
{
    Array arr1={{10,15,18,26,29,45},10,6};
    Array arr2={{5,9,23,27,55,105},10,6};
    Merging(&arr1, &arr2);
}