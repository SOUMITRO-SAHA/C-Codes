#include <iostream>

using namespace std;

int main(){
    // r = Team A's score, o = overs have done. c = scores have maid in first o overs.
    int r, o, c;
    cin>>r>>o>>c;
    //Variables :
    int overLeft = 20 - o;
    int totBallLeft = overLeft*6;
    int maxRunCanBeMaid = totBallLeft*6;
    int totRun = maxRunCanBeMaid + c;
    //Conditions:
    if (totRun > r)
    {
        //Output:
        cout<<"YES"<<endl;
    }else
    {
        //Output:
        cout<<"NO"<<endl;
    }
    
    



}