#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
//Creating a Function to move Zero to the End
//! Naive Solution
void moveZeroToEnd(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        //Time-Complexity O(n^2)
        if (arr[i] == 0)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[j] != 0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
            
        }
        
    }
    //Printing Array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
*/
//! Efficient Solution
void moveZeroToEnd(int arr[], int n){
    //Time-Complexity O(n)
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    //Printing Array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n = 6;
    int arr[n] = {8,5,0,10,0,20};
    moveZeroToEnd(arr,n);

    return 0;
}