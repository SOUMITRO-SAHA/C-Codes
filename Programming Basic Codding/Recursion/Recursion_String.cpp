#include <iostream>
using namespace std;
#include <string.h>
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

//! Remove 'X' from the String
void removeX(char s[])
{
    if (s[0] == '\0')
    {
        return;
    }
    if (s[0] != 'x')
    {
        removeX(s + 1);
    }
    else
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeX(s);
    }
}

//! Removing All the Consecutive Duplicates form the String;
void removeConChar(char s[])
{
    if (s[0] == '\0')
    {
        return;
    }
    if (s[0] != s[1])
    {
        removeConChar(s + 1);
    }
    else
    {
        int i = 1;
        for (; s[i] = '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeConChar(s);
    }
}

int main()
{
    char str[20];
    cin >> str;
    int l = length(str);
    cout << l << endl;
    // Removing the Characters form Strings
    cout << "After Removing Character form String" << endl;
    removeX(str);
    l = length(str);
    cout << str << endl;
    cout << l << endl;
    // Removing Consecutive Caracters
    removeConChar(str);
    l = length(str);
    cout << str << endl;
    cout << l << endl;

    //! Length of a String using loop;
    cout << "Result from String Function" << endl; // Hence We have to include <String.h> header file.
    cout << "String length is - " << strlen(str) << endl;

    return 0;
}
