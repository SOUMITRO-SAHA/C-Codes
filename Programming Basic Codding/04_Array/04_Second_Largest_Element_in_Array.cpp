#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
Todo: Naive Approach
//! Function for get largest Element in the Array
int getLargest(int arr[],int n){
    int largeIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[largeIndex])
        {
            largeIndex = i;
        }
        
    }
    return largeIndex;
    
}
//! Function for get Second largest Element in the Array
int secondLargest(int arr[],int n){
    int largeIndex = getLargest(arr,n);
    int sLargeIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largeIndex])
        {
            if (sLargeIndex == -1)
            {
                sLargeIndex = i;
            }
            else if (arr[i]>arr[sLargeIndex])
            {
                sLargeIndex = i;
            }
        }
        
    }
    return sLargeIndex;
}
*/
/*
Todo: Efficient Approach
! Find the Second Largest Element in the Array
*/
int secondLargest(int arr[], int n){
    int sLarge = -1, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[max])
        {
            sLarge = max;
            max = i;
        }
        else if (arr[i] != arr[max])
        {
            if (sLarge == -1 || arr[i]>arr[sLarge])
            {
                sLarge = i;
            }
            
        }
        
    }
    return sLarge;
    
}

int main(){
    int n=5;
    int arr[] = {20, 29, 12, 18, 10};
    int secondLargestIndex = secondLargest(arr,n);
    cout<<"Second Largest element is: "<<arr[secondLargestIndex];
    

    return 0;
}
