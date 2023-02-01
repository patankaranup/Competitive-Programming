#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
long long int arr[N];

int main(){

	// prefix sum 

	int n,m;
	cin>>n>>m;
	long long int maximum = -1e18; // initialize maximum to a very small value
	while(m--){
		int a,b,d;
		cin>>a>>b>>d;
		// for prefix sum, set the value to d at a and b+1 so that at last we can take the prefix sum of every value
		arr[a] += d;
		arr[b+1] -= d;
	}
	for (int i=1 ; i<=n; i++){
		arr[i] = arr[i]+arr[i-1];
		maximum = max(arr[i], maximum);
	}
	cout<<maximum<<endl;
	return 0;
}
