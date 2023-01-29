// Constraints 
// 1 <= N <= 10^5 (array of N integers)
// 1 <= a[i] <= 10^9 (array elements are less than 10^9)
// 1 <= Q <= 10^5 (Q queries given)
// 1 <= L,R <= N (L and R index of the array)

#include <bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
int a[N];
// prefix sum array 
int pf[N];

int main(){

	int n;
	cin>>n;
	for(int i = 1; i<=n ; i++){
		cin>>a[i];
		pf[i] = pf[i-1] + a[i];
	}

	int q;
	cin>>q;
	while(q--){
		int l, r;
		cin>>l>>r;
		cout<<pf[r]-pf[l-1]<<endl;
	}
	return 0;
}