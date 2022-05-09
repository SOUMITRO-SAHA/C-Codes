#include <iostream>
using namespace std;
//! Recursive Call from Last index to First Index.
// *first Method finding the last index form Last to first.
int lastIndex(int a[], int size, int key){
    if(size == 0){ return 0;}
    else if (a[size-1]==key)
    {
        return size -1;
    }
    
    return lastIndex(a, size-1,key);
    
}
//! Recursive Call from First index to Last Index
// *Second method Recursive call form first to last
int lastIndex(int a[], int size, int key)
{
    if (size == 0)
    {
        return -1;
    }
    int smallArrIndex = lastIndex(a + 1, size - 1, key);
    if (smallArrIndex != -1)
    {
        return smallArrIndex + 1;
    }
    else
    {
        if (a[0] == key)
        {
            return 0;
        }
        else
            return -1;
    }
}

int main()
{
    int arr[10]={2, 3, 4, 5, 5, 2, 7};

    cout<<lastIndex(arr, 10, 9);

    return 0;
}