/*
// Print the table of 6 by using loops:
// or print the table via taking user input.
# include <iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter n -- ";
    cin>>n;
    for ( i = 1; i <= 10; i++)
    {   
        
        cout<<n<<"x"<<i<<"="<<i*n<<endl;
    }
    
    return 0;
}
*/
// Print Sum of Natural Numbers
/*
coding Exercise 28:Display Digits of a Numer in reverse.Output : cout<<digit<<" ";
eg- n= 234
rev = 4 3 2
*/
#include <iostream>
using namespace std;
int main(){
    int n,digit;
    cout<<"Enter n"<<endl;
    cin>>n;
    while (n>0)
    {
        digit = n%10;
        n = n/10;
        cout<<digit<<" ";
    }
    
}