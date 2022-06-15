#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6,3,8,10,16,7,5,2,9,14};
    int k=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int arr2[max]={0};
    for(int i=0;i<n;i++)
    {
        arr2[arr[i]]=1;
        if(arr2[k-arr[i]]==1 && k-arr[i]!=arr[i])
        {
            cout<<arr[i]<<" "<<k-arr[i]<<"\n";
        }
    }
    return 0;
}