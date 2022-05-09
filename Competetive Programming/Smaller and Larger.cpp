#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n, x;
	int l=0, h = (n-1);
	int mid,sCount,lCount;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}/*
	for(int i=0;i<n;i++){
		// mid = (l+h)/2;
		// if(x==arr[mid])
		// {	cout<<"Found at "<<i<<endl;
		// 	sc = i;
		// 	hc = (n - i);
		// 	cout<<"sc = "<<sc<<" "<<"hc= "<<hc<<endl;
		// 	break;
		// }
		// else if(x < arr[mid]){
		// 	h = mid -1;
		// }else l = mid +1;
		mid = (l+h)/2;
		if(x == 0){
			cout<<"Found at "<<i<<endl;
			sCount = 0;
			lCount = (n);
			break;
		}
		else if(x==arr[mid]){
			cout<<"Found at "<<i<<endl;
			sCount = i;
			lCount = (n - i);
			cout<<"sc = "<<sCount<<" "<<"lc= "<<lCount<<endl;
			break;
		}
		else if( x < arr[mid]){
			h = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	*/
	for(int i=0; i<=10; i++)
    {
        mid=(l+h)/2;
	if(x==arr[mid])
	{
	    cout<<"Found at "<<mid;
	    return 0;
	}
	else if(x<arr[mid]){
	    h = mid - 1;
        }
			
	else
	    l = mid + 1;
    }	    
    cout<<"Not Found!";



	return 0;
}