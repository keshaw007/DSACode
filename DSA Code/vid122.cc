#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6,7,8,9,11,12,15,16,17,18,19,21,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    int diff=arr[0];
    int i=0;
    while(i<n)
    {
        if(arr[i]-i!=diff)
        {
            cout<<i+diff<<" ";
            diff++;
        }
        else i++;
    }
    return 0;
}