#include <iostream>
using namespace std;

int main(){
    int n,key;
    cout<<"Enter the Value of n -- ";
    cin>>n;
    
    int A[n];
    // Testing Whether n working on Not
    // """Status: Working"""
    // for(int x:A)
    //     cout<<x<<" ";
    // Now,Taking user input for the Array elements using for loop;
    cout<<"Enter the numbers -- ";
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    // Checking Whether input works or not; ==> Status: Working.
    // for(int x:A)
    //     cout<<x<<" ";
    // To find a key within a Array.
    cout<<"Enter the key -- ";
    cin>>key;
    // Writing a for loop to find the given key.This is called Linear Search.
    for (int i = 0; i < n; i++)
    {
        if (key==A[i])
        {
            cout<<"The Key is found at the position "<<i<<endl;
            return 0;
        }
        
    }
    cout<<"The key is not in the Array. Sorry!"<<endl;
    return 0;
}