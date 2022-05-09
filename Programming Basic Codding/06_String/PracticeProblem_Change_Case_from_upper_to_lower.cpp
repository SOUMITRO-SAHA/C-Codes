#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "WELCoME";
    // string::iterator it;
    // for (it = str.begin(); it != str.end(); it++)
    // {
    //     *it += 32;
    //     cout << *it;
    // }
    // TODO: Via for-loop without iterator;
    //  as we know the range of Upper cases is 65 - 90
    // * if there are a mix of Upper case and Lower case.
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
            // cout << str[i];
        }
    }
    // cout << endl;
    cout << str << endl;
    // TODO: Change Mix-Case to Upper Case
    string str1 = "WeLcomE5";
    string strUpperCase = "WeLcomE5";
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 65 && str1[i] <= 90)
        {
            str1[i] += 32;
        }
    }
    // Converting to Upper Case
    //  as we know the range of Lower cases is 97 - 122

    for (int i = 0; strUpperCase[i] != '\0'; i++)
    {
        if (strUpperCase[i] >= 97 && strUpperCase[i] <= 122)
        {
            strUpperCase[i] -= 32;
        }
    }
    cout << str1 << endl;
    cout << strUpperCase << endl;
}