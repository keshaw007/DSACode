#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[]="verbose";
    char B[]="observe";
    int a=0,b=0;
    for (int i=0;A[i]!='\0';i++)
    {
        a=1,b=1;
        a=a<<A[i]-97;
        b=b<<B[i]-97;
    }
    if((a&b)>0)
    {
        cout<<"Both string are anagram to each other";
    }
    else
    {
        cout<<"Not a anagramic string";
    }
    return 0;
}