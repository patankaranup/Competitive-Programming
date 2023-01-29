// Constraints 
// 1 <= N <= 10^5 (array of N integers)
// 1 <= a[i] <= 10^9 (array elements are less than 10^9)
// 1 <= Q <= 10^5 (Q queries given)
// 1 <= L,R <= N (L and R index of the array)

#include <bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
int a[N];


int main(){

	int n;
	cin>>n;
	for(int i = 1; i<=n ; i++){
		cin>>a[i];
	}

	int q;
	cin>>q;
	while(q--){
		int l, r;
		cin>>l>>r;
		long long sum = 0;
		for(int i = l; i<=r, i++){
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}