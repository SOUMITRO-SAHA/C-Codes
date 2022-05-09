#include <iostream>

using namespace std;
void sum(int a, int b){
    int sum = a + b ;
    cout<<sum<<endl;
}

int main(){
    int t, a, b;
    cin>>t;
    for(int i=1; i<=t;i++){
        cin>>a>>b;
        sum(a,b);
    }
}