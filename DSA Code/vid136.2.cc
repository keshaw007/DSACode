#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[]="python";
    int j;
    for(j=0;A[j]!='\0';j++)
    {
    }
    j--;
    int i=0;
    while(i<j)
    {
        char temp;
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        i++;
        j--;
    }
    cout<<A;
    return 0;
}