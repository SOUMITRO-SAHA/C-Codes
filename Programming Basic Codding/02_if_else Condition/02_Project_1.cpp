/* Write a Program to offer discounts on total bill Amount.
Program Should take Total Amount as input and calculate discount
If bill amount < 500 no discount.
If bill amount is >= 500 and < 1500 then 10% discount
If bill amount is >= 1500 then 15% discount.
*/
#include <iostream>
using namespace std;
int main(){
    float disAmount;
    int amount;
    string D;
    cout<<"Enter the Amount here -- \n";
    cin>>amount;
    if(amount>= 1500){
        D = "15%";
        disAmount = amount -(amount*(15/100.0));
    }
    else if(amount >= 500 && amount < 1500){
        D = "10%";
        disAmount = amount -(amount*(10/100.0));
    }
    else{
        D = "0%";
        disAmount = amount;
    }
    cout<<"Total Discount is - "<<D<<"\n" <<"The Discounted Amount is -- "<<disAmount<<endl;
}