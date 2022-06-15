#include<bits/stdc++.h>
using namespace std;
bool validate(char *A)
{
    for(int i=0;A[i]!='\0';i++)
    {
        if(!(A[i]>=65&&A[i]<=90)&&!(A[i]>=97&&A[i]<=122)&&!(A[i]>=48&&A[i]<=57))
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    char A[]="Anil3210";
    if(validate(A)==true)
    {
        cout<<"It's a valid string";
    }
    else{
        cout<<"It's not a valid string";
    }
}