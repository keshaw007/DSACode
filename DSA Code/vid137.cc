#include<bits/stdc++.h>
using namespace std;
bool check(char *A)
{
    int j;
    for( j=0;A[j]!='\0';j++)
    {
    }
    int i=0;
    j--;
    while(i<=j)
    {
        if(A[i]!=A[j])
        {
            return false;
            break;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    char A[]="azza";
    if(check(A)==true)
    {
        cout<<"It's Palindromic string";
    }
    else{
        cout<<"Not a Palindromic string";
    }
    return 0;
}