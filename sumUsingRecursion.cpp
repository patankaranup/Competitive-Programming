#include <bits/stdc++.h>
using namespace std;

// sum of array upto n elements
int sum (int n, int arr[]){
	if (n < 0) return 0;
	return sum(n-1,arr) + arr[n];
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	cout<<sum(2,a)<<endl;

	return 0;
}