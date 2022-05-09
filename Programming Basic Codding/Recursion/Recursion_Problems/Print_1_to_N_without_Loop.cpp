/*
Print numbers from 1 to N without the help of loops.
Example 1:

Input:
N = 10
Output: 1 2 3 4 5 6 7 8 9 10
*/
#include <iostream>
using namespace std;
void printNo(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    printNo(n - 1);
    cout << n << " ";
}
// Same Problem in reversed order
void printNoRev(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    printNoRev(n - 1);
}
int main()
{
    int n = 10;

    printNo(n);
    cout << endl;
    printNoRev(n);
}