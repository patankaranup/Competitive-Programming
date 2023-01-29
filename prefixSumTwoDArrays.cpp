// 2d Array 
// Constraints 
// 1 <= N <= 10^3 (2d array of N*N integers)
// 1 <= a[i][j] <= 10^9 (array elements are less than 10^9)
// 1 <= Q <= 10^5 (Q queries given)
// 1 <= a,b,c,d <= N (a and b top left and c and d bottom right index of the array)
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N][N];
// for prefix sum (global arrays are initialize to zero)
long long pf[N][N];
int main(){
	int n;
	cin>>n;
	for(int i =1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			cin>>arr[i][j];
			// for understanding make a 2d array
			pf[i][j] = arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		// make a 3x3 matrix for understanding the below code
		long long sum = pf[c][d]- pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1];
		cout<< sum <<endl;
	}
	return 0;
}