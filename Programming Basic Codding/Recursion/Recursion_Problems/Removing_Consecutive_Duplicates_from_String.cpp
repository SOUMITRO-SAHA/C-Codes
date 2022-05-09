#include <iostream>
using namespace std;

void remConDup(char s[])
{
    if (s[0] == '\0')
    {
        return;
    }
    if (s[0] != s[1])
    {
        remConDup(s + 1);
    }
    else
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        remConDup(s);
    }
}

//! Length of a String using Recursion;
int length(char s[])
{
    if (s[0] == '\0')
    {
        return 0;
    }
    int smallStringLength = length(s + 1);
    return 1 + smallStringLength;
}

int main()
{
    char str[20];
    cin >> str;
    int l = length(str);
    cout << l << endl;
    remConDup(str);
    cout << str << endl;
    cout << l << endl;

    return 0;
}