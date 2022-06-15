#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int lengh;
};
void swap (int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int search(class Array *arr, int n)
{
    for(int i=0;i<arr->lengh;i++)
    {
        if(n==arr->A[i])
        {
            // TRANSPOSITION USED
            swap(&arr->A[i],&arr-> A[i-1]);
            return i;
        }
    }
    return -1;
}
int main()
{
    Array arr{{2,3,4,5,6},10,5};
    int n;
    cout<<"Enter number to be search :- ";
    cin>>n;
    cout<<search(&arr,n);
    return 0;
}