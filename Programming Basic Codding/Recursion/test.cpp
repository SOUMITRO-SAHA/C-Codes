#include <iostream>
using namespace std;

//A recursive function to find all indexes of a number
int allIndexes(int a[], int size, int key, int output[]){
    // If an empty array comes to the function then return 0;
    if (size==0)
    {
        return 0;
    }
    //Getting The recursive answer.
    int smallAns = allIndexes(a+1,size-1,key,output);

    //If the element at index 0 is equal to key then add 1 to the array value and shift them right by 1 step.
    if(a[0]==key){
        for (int i = smallAns -1; i >= 0; i--)
        {
            output[i+1]=output[i]+1;
        }
        // Put the Start index in front of the array
        output[0]=0;
        smallAns++;
    }
    else{
        //If the element at index 0 in not equal to the key then add 1 to the array value
        for(int i= smallAns-1; i>=0;i--){
            output[i]=output[i]+1;
        }
    }
    return smallAns;
    
}

//Function to find all indexes of a Number
void allIndexes(int a[],int size, int key)
{
    int output[size];
    int size1 = allIndexes(a,size,key,output);

    for (int i = 0; i < size1; i++)
    {
        cout<<output[i]<<" ";
    }
    
}

int main(){
    int arr[10]={2, 3, 5, 2, 6, 2, 6, 2, 4, 5};
    int key = 2;
    //Calculating the size of the array;
    int size = sizeof(arr)/sizeof(arr[0]);

    //Function Call
    allIndexes(arr,size,key);

    return 0;
}