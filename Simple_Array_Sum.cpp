#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    int arr[n];
    for(int i = 0;i<=n;i++){
        //Input function for arr.
        cin>>arr[i];
    }
    for (int i = 0; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for (int i = 0; i <=n; i++)
    {
        sum += arr[i];
    }
    //Output
    cout<<sum<<endl;

    return 0;
}