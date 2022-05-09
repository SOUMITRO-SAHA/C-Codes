/*
""" Skeleton of the Conditional Statement """
''' ### (If-Else)### '''

# include <iostream>
using namespace std;
int main(){
    ------------------
    ------------------
    if (<condition>){
        -----------
        -----------
        -----------
    }
    else{
        -----------
        -----------
    }
    return 0;
}
*/
/*
// Find the Max of 2 random Numbers (via taking input form the user) and potray which one is higher.

# include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter 2 Numbers\n";
    cin>>x>>y;
    if(x > y){
        cout<<"The Max Number is - "<<x;
    }
    else{
        cout<<"The Max Number is - "<<y;
    }
    return 0;
}
*/
// Validation
/*
# include <iostream>
using namespace std;
int main(){
    int divisor, dividend, quotient, remainder;
    cout << "Enter dividend - ";
    cin >> dividend;
    cout << "Enter divisor - ";
    cin >> divisor;
    if (divisor == 0){
        cout<<"You have entered ZERO as a Divisor"<<endl;

    }
    else{
        quotient = (dividend / divisor);
        remainder = dividend % divisor;
        if( remainder == 0){
            cout<<quotient<<endl;
        }
        else{
            cout<<"The Quotient is "<<quotient<<"\n"<<"And The Remainder is " <<remainder<<endl;
        }
        
    }
}
*/

// Switch Case
#include <iostream>
using namespace std;
int main(){
    cout<<"Choose your option -- \n";
    cout<<"1. Addition\n"<<"2. Substraction\n"<<"3. Multiplication\n"<<"4. Division\n";
    int option,a,b;
    float c;
    cout<<"Enter Your Option Here - ";
    cin>>option;
    cout<<"Enter 2 Numbers -- ";
    cin>>a>>b;
    switch (option)
    {
    case 1:c = a + b;
        
        break;
    case 2: c = a - b;
        break;
    case 3: c = a * b;
        break;
    case 4: c = (float)a/b;
        break;
    
    default:
        break;
    }
    cout<<"The Result is -- "<<c;
    return 0;
}
