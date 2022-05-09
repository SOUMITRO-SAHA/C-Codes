#include <iostream>
using namespace std;

int index(int a[], int size, int key)
{
    if (size == 0)
    {
        return -1;
    }

    else if (a[0] == key)
    {
        return 0;
    }
    else
    {
        int smallArrIndex = index(a + 1, size - 1, key);
        if (smallArrIndex == -1)
        {
            return -1;
        }
        else
        {
            return 1 + smallArrIndex;
        }
    }
}

int main()
{
    int Arr[10] = {2, 4, 5, 8, 6, 8, 5};
    cout << index(Arr, 8, 9) << endl;

    return 0;
}