/*
Write a program which takes an integer from user and that integerr is reversed.
If the reversed integer is equal to the integer enterred by user then, that number is a palindrom
if not that number is not a palindrome.
*/
#include <iostream>
using namespace std;
int main(){
    int n,m,r,rev=0;
    cout<<"Enter a number -- ";
    cin>>n;
    m=n;
    while(n>0){
        r = n%10;
        n=n/10;
        rev = rev*10+r;
    

    }
    cout<<"The Reverse of the given number is -- "<<rev;
    cout<<endl;
    if(rev==m) 
        cout<<"The given Number is a Palindrome."<<endl;
    else
        cout<<"The given Number is not a Palindrome."<<endl;
}