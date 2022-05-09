#include <iostream>

using namespace std;
void occurrence(int n){
    int count = 0;
    while (n>0)
    {
        if(n%10 == 4){
            count ++;
        }
        n /= 10;
    }
    cout<<count<<endl;
    
}

int main(){
    int t,n;
    cin>>t;
    //Time Complexcity == O(n^2)
    for(int i=1;i<=t;i++){
        cin>>n;
        occurrence(n);
    }
}