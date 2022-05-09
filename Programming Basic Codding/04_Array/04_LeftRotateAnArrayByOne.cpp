#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//Function for Left Rotation an Array
void leftRotateOne(int arr[], int n){
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n - 1] = temp;
    //Printing Array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n = 5;
    int *arr = new int[n]{1,2,3,4,5};
    leftRotateOne(arr,n);
    return 0;
}