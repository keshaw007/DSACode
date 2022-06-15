#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int *A;
    int size;
    int length;
};
void display (class Array arr)
{
    cout<<"Elements are as follows \n";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int main()
{
    Array arr;
    cout<<"Enter size of array :- ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length=0;
    int n,i;
    cout<<"Enter No. of Numbers :- ";
    cin>>n;
    arr.length=n;
    cout<<"Enter All Elements \n";
    for(i=0;i<n;i++)
    {
        cin>>arr.A[i];
    }
    display(arr);
    return 0;
}