#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={8,3,6,4,6,5,6,8,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int arr2[max+1]={0};
    for(int i=0;i<n;i++)
    {
        arr2[arr[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        if(arr2[i]>1)
        {
            cout<<i<<" appears "<<arr2[i]<<" times.\n";
        }
    }
    return 0;
}