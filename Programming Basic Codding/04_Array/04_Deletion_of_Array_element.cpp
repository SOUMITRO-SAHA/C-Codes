#include <bits/stdc++.h>
#include <iostream>

using namespace std;

//Function for deletion an element
int deletArrayElement(int *arr, int n, int x){
    //Condition for deletion
    int i;
    for(i = 0;i<n;i++){
        if(arr[i] == x) break;
        if(i==n) return n;
    }
    for(int j=i; j<n-1;j++){
        arr[j] = arr[j+1];
    }
    return (n-1);
}
//Printing Function of a Array
void printArrayElement(int *arr,int n){
    //Printing the elemnts
    for (int x = 0; x < n; x++)
    {
        cout<<arr[x]<<" ";
    }
}

int main(){
    int n = 5, x;
    cout<<"Enter x: ";
    cin>>x;
    int *arr = new int[n]{1, 2, 4, 5, 6};
    //Calling Deletion Function
    int size = deletArrayElement(arr, n, x);

    //Calling Printing Function
    printArrayElement(arr, size);
    delete arr;
    
    

    return 0;
}