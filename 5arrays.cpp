#include<bits/stdc++.h>
using namespace std;

// array outside local scope so the value exceeds 1e5

const int N = 1e7;
int arr1[N];


int main()
{
	int m,n;
	cin>>m>>n;

	int a[m][n];

	for(int i = 0; i<m; i++){
		for (int j = 0; j<n; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i<m; i++){
		for (int j = 0; j<n; j++){
			cout<<a[i][j] << " ";
		}
		cout<<endl;
	}

	// SIZE OF ARRAY LOCALLY 1e5

	int size = 1e5;
	int arr[size];
	arr[size-1] = 7;
	cout<<arr[size-1]<<endl;

	arr1[N-1] = 99;
	cout<<arr1[N-1];

	return 0;
}