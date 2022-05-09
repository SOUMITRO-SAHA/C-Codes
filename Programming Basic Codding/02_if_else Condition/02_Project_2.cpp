/*
All years which are perfectly divisible by 4 are leap years except for
century years (years ending with 00) which is leap year only it is
perfectly divisible by 400
For eg- 2012, 2004, 1986 etc are leap year but, 1971,2006 etc are not 
leap year. Similarly, 1200, 1600,2000, 2400 are leap years but 1700, 1800
1900 etc are not.
*/
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"To check whether a year is leap year or Not"<<"\n"<<"Enter a year -- ";
    cin>>year;
    if(year % 4 == 0){
        cout<<year<<" "<<"is a leap year."<<endl;
    }
    else if(year % 100 == 0){
        if (year % 400 == 0)
        {
            cout<<year<<" "<<"is a leap year."<<endl;
        }else{
            cout<<year<<" "<<"is not a leap year."<<endl;
        }
        
    }
    else{
        cout<<year<<" "<<"is not a leap year."<<endl;
    }
}