#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,6,8,8,10,12,15,15,15,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int rep=0;
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            if(arr[i]!=rep)
            {
                cout<<arr[i]<<" ";
                rep=arr[i];
            }
        }
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            if(count!=1)
            {
            cout<<count<<" ";
            count=1;
            }
        }
    }
    return 0;
}