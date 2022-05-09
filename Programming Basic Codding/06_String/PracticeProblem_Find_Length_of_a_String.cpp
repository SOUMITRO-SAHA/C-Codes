/*
! Find the Length a String. Find the length one by one using for-loop.
*(WELCOME)

*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "WELCOME";
    string str2;
    cout << "Enter a word - ";
    getline(cin, str2);
    string::iterator it2;
    cout << "Length of WELCOME is = " << str1.length() << endl;
    cout << "Length of " << str2 << " is = " << str2.length() << endl;
    // TODO: Finding the Length one by one.
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        sum += 1;
    }
    for (it2 = str2.begin(); it2 != str2.end(); it2++)
    {
        sum2++;
    }

    cout << "The Length of WELCOME is (Using for loop) = " << sum << endl;
    cout << "Length of " << str2 << " is (Using for loop) = " << sum2 << endl;
}