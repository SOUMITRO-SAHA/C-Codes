#include <iostream>
using namespace std;
int main(){
    // Defining the necessary variables for taking user input & for the array.
    int n,key,mid,l = 0,h = n;
    cout<<"Enter the values of N -- ";
    cin>>n;
    int A[n];
    // Taking user input for the Array.Via for loop.
    // Input numbers is not sorted here. Please put sorted numbers as an input.
    cout<<"Enter the Numbers -- ";
    
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    // Taking the value of Key.
    cout<<"Enter the Key -- ";
    cin>>key;
    // Performing Binary Search.
    while (l <= h )
    {
        mid = (l+h)/2;
        if (key == A[mid])
        {
            cout<<"Found at"<<mid;
            return 0;
        }
        else if (key<A[mid])
        {
            h = mid -1;
        }
        else
            l = mid + 1;        
    }
    cout<<"Not Found";
    return 0;
}