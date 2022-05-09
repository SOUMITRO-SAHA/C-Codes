#include <iostream>
using namespace std;
void increment(int &n)
{
    n++;
}
// void &fun(int i)
// {
//     int a = i;
//     return a;
// }

int main()
{
    /*
    ! This is how to declare a Reference variable.
    int i = 10;
    int &j = i;
    j++;
    cout << j << endl;
    */
    //? Let's practice how called by reference works.
    // Send data by Reference.
    int i = 10;
    increment(i);
    cout << i << endl;
    // We can also received data by reference.
    /*
    !Its a very bad practice to use Reference Variable.
    int k = fun(i);  !It will not work because the scope of the function is limited.
    int &k = fun(i);
    cout << k << endl;
    */

    return 0;
}