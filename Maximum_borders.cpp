// #include <iostream>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         char arr[n][m];
//         // read the cells
//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             int count = 0;
//             for (int j = 0; j < m; ++j)
//             {
//                 cin >> arr[i][j];
//                 // counting the number of #
//                 count += arr[i][j] == '#';
//             }
//             ans = max(ans, count);
//         }
//         cout << ans << endl;
//     }
// }
#include <iostream>
using namespace std;
int main() {
	//Taking TastCases;
	int tastCase;
	cin>>tastCase;
	for(int i=1;i<=tastCase;i++){
		int n, m;
		//taking input for n,m
		cin>>n>>m;
	    int ans = 0;
        char arr[n][m]; 
		for(int i=0;i<n;i++){
			int count=0;
			for(int j=0;j<m;j++){
				//Taking Input into the Array
				cin>>arr[i][j];
				//Counter for the black cells
				count += arr[i][j]=='#';
			}
			//Evaluating the maximum No. of Consecutive black cells
			ans = max(ans, count);
		}
        //Here, the time-complexity for each test case is O(n^2).
		cout<<ans<<endl;
	}
}