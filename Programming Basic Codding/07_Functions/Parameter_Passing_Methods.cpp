#include <iostream>
using namespace std;
/*
TODO: Called by Value Mehtod or Pass by Value Method.

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << "  " << b << endl;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << "  " << y << endl;
    return 0;
}
? Here the actual values are not changed only the formal(local) values are changed inside the function.
? The values are in main() are called Actual values
? and the values of the swap() function are called formal values(local values).
! So swapping the variables by "Called by Value Method" are not a good practice /or, Preferable.
*/