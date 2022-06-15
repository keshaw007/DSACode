#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = "How   are    you?";
    int i = 0, vcount = 0, ccount = 0, wcount = 0, acount = 0;
    for (; str[i] != '\0'; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            acount++;
            if(str[i]=='a'||str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                vcount++;
            }
            else
            {
                ccount++;
            }
        }
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' '&& str[i+1]!=' ' )
        {
            wcount++;
        }
    }
    cout << "Vowel count is " << vcount << "\n";
    cout << "consonant count is " << ccount << "\n";
    cout << "alphabet count is " << acount << "\n";
    cout << "word count is " << wcount + 1 << "\n";
    return 0;
}