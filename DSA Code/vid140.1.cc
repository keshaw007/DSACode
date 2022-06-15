#include<bits/stdc++.h>
using namespace std;
bool anagram(char *test, char *B)
{
    for(int i=0;B[i]!='\0';i++)
    {
        if(test[B[i]-97]=='\0')
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    char A[]="verbose";
    char B[]="observe";
    char test[27]="\0";
    for(int i=0;A[i]!='\0';i++)
    {
        test[A[i]-97]+=1;
    }
    if(anagram(test, B)==true)
    {
        cout<<"It's anagramic string";
    }
    else
    {
        cout<<"It's not anagramic string";
    }
    return 0;
}