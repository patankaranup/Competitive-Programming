#include<bits/stdc++.h>
using namespace std;

const int N= 1e7+10;
int hashArr[N]; // global arr initialize with zero




int main(){
	int n ;
	cin>>n;
	int a[n];
	for(int i =0; i<n; i++){
		cin>>a[i];
		// hashing 
		hashArr[a[i]]++; // storing count of elements in O(n)
	}
	int q;
	cin>>q;

	while(q--){
		int x;
		cin>>x;
		// int ct = 0;
		// for(int i = 0; i<n ; i++){
		// 	if(a[i]==x){
		// 		ct++;
		// 	}
		// }
		// cout<<ct<<endl;
		cout<<hashArr[x]<<endl;
	}
	// How to count for negative numbers 
	// add the minimum number to the array 

	return 0;
}