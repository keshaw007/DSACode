#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[]="finding";
    char B[27]="\0";
    for(int i=0;A[i]!='\0';i++)
    {
        (int)B[A[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if((int)B[i]>1)
        {
            cout<<"Repeating character = "<<(char)(i+97)<<"\n";
            cout<<"Number of times = "<<(int)B[i]<<"\n";
        }
    }
    return 0;
}