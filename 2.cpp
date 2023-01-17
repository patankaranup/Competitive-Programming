#include<bits/stdc++.h>
using namespace std;

int main(){
	// see operator precedence
	double a = 3.8/2;
	cout<<a<<endl;

	// -10^9 < int < 10^9
	// -10^12 < long int < 10^12
	// -10^18 < long long int < 10^18

	int mx = INT_MAX;
	cout<<mx<<endl;
	int min = mx+1;
	cout<<min<<endl;
	int small = INT_MIN;
	cout<<small<<endl;

	int num1 = 100000;
	int num2 = 100000;
	// this will multiply both values in int dtype
	long int mul = num1*num2;
	cout<<mul<<endl;
	// this will multiply the values in long long int 
	
	long int mult = num1* 1LL * num2;
	cout<<mult<<endl;

	double x = 100000;
	double y = 100000;
	double z = x*y;
	// use << fixed << keyword for avoiding scientific notation 
	// use setprecision for point values
	cout<<fixed<<setprecision(0) <<z<<endl;

	double e = 1e24;
	cout<<fixed<<e<<endl;

	





	return 0;
}