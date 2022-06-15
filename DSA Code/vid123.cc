#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2, 5, 15, 10, 9, 8, 1, 6, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int final_arr[max]={0};
    int i = 0;
    while (i < n)
    {
        int val = arr[i];
        final_arr[val] = 1;
        i++;
    }
    for (i = 1; i < max; i++)
    {
        if (final_arr[i] == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}