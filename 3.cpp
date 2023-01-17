#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 2;
	int b = 3;
	int c = 5;
	int n ;
	cin>>n;
	cout<<((a<=b) && (b<=c))<<endl;
	cout<<((a==b) || (b!=c))<<endl;

	
	if (n%2 == 0){
		cout<<"Even"<<endl;
	}
	else {
		cout<<"Odd"<<endl;
	}
	int i = 1;
	while(i<=10){
		cout<<i<<endl;
		i++;
	}

	for (int j = 0; j<10; j++){
		cout<<j<<endl;
	}
	for(int i = 1; i<=n; i++){
		for (int j = 1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}

	
	return 0;
}
