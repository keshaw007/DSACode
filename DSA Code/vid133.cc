#include<bits/stdc++.h>
using namespace std;
int len_string(char str[])
{
    int count=0;
    int i=0;
    while(1)
    {
        if(str[i]!='\0')
        {
            count++;
            i++;
        }
        else
        {
            break;
        }
    }
    return count;
}
void abcd(char str[])
{
    int n=len_string(str);
    char new_str[n];
    for(int i=0;str[i]!='\0';i++)
    {
        if((int)str[i]>=65 && (int)str[i]<=90)
        {
            new_str[i]=(int)str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            new_str[i]=(int)str[i]-32;
        }
        else
        {
            new_str[i]=str[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<new_str[i];
    }
}
int main()
{
    char str[]="WelC9OME5";
    abcd(str);
    return 0;
}