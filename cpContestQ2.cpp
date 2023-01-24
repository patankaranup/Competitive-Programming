#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		long long product = 1;
		for (int i = 0; i < n; ++i)
		{	
			int x;
			cin>>x;
			product *= x;
		}
		int lsb = product%10;
		if(lsb==2 || lsb ==3 || lsb == 5){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}

	
	return 0;
}