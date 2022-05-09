#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
? Creating a Function to Reverse an Array
!My Code:
void reverseArray(int arr[],int n){
    for (int i = n-1; i >= 0; i--)
    {
        cout<< arr[i]<<" ";
    }
    
}
*/
void reverseArray(int *arr,int n){
    int low = 0, high = n -1;
    while(low < high){
        //Swaping the Array Elements
        int temp = arr[low];
        arr[low] =arr[high];
        arr[high] = temp;
        low ++;
        high --;
    }
    
}
//Function for Printing an Array
void printArray(int *arr, int n){
    //Printing Array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n = 6;
    int *arr =new int[n] {1,2,3,4,5,6};
    //Calling Reversing Function
    reverseArray(arr,n);
    printArray(arr,n);

    delete []arr;

    return 0;
}