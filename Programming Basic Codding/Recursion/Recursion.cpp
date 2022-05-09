#include <iostream>
using namespace std;
/*
! Find the factorial of 'n'th term.
*/
int factorial(int n)
{
    cout << n << endl;
    if (n == 0)
    {
        return 1;
    }
    int smallOutput = factorial(n - 1);
    return n * smallOutput;
}
int main()a
{
    int n;
    cin >> n;
    int output = factorial(n);
    cout << "The Factorial of " << n << " is " << output << endl;
}
/*
! Find the sum of 'N' th natural Number.
*/

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallNo = sum(n - 1);
    int output = n + smallNo;
    return output;
}

int main()
{
    int n;
    cout << sum(5) << endl;
}
/*
! Find the 'N' th Fibonacci Number.
*/
int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int smN1 = fibo(n - 1);
    int smN2 = fibo(n - 2);
    int output = smN1 + smN2;
    return output;
}
int main()
{
    int n;
    cout << fibo(3) << endl;
    return 0;
}
/*
!Check whether an array is sorted or not ?
*/
bool is_sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    bool isSmallerSorted = is_sorted(a + 1, size - 1);
    return isSmallerSorted;
}
int main()
{
    int a[10] = {2, 3, 4, 9, 8};
    int size;
    cout << is_sorted(a, 5) << endl;
}