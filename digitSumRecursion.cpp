#include <bits/stdc++.h>
using namespace std;

// sum of digit in a number
int digitSum (int n){
	if (n == 0) return 0;
	return digitSum(n/10)+ (n%10);
}

int main(){
	int n;
	cin>>n;
	cout<<digitSum(n)<<endl;

	return 0;
}