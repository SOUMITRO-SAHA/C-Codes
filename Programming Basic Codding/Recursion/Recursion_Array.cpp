// ! Checking that is the Array is sorted or not
#include <iostream>
using namespace std;
bool isArrSorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    bool smallArrSorted = isArrSorted(a + 1, size - 1);
    return smallArrSorted;
}
int main()
{
    int Arr[10] = {2, 3, 4, 5, 6, 8, 9, 12};
    cout << isArrSorted(Arr, 8) << endl;
}
// namespace std;
