#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin>>a>>b>>c;
	int c_num;
	// for getting c th number
	for(int i = 2; c>0; i++){
		if (i%a == 0 || i%b == 0){
			c--;
			c_num = i;
		}
	}
	// lcm of a and b
	int lcm;
	for(int i = 1; i<=a*b; i++){
		if (i%a == 0 && i%b ==0){
			lcm = i;
			break;
		}

	}	
	// getting steps for printing number
	int step;
	if (c_num%a ==0 && c_num % b == 0){
		step = lcm;
	} else if(c_num%a == 0){
		step = a;
	} else {
		step = b;
	}
	// printing the number from cth num to 0 using step as decremnet
	for (int i = c_num; i >=0; i= i-step)
	{
		cout<<i<<" ";
	}




	return 0;
}