#include <bits/stdc++.h>
using namespace std;

void printHello(){
	cout<<"Hello World";
}

int sum (int a, int b){
	int result = a+b;
	return result;
}

int digitSum(int digit){
	int sum = 0;
	while(digit){
		sum += digit%10;
		digit /= 10;
	}
	return sum;
}

// & use for pass by reference not a copy
void increment(int &n, int n1){
	n++;
	n1++;
}

void swap(int &i, int &j){
	int temp = i;
	i = j;
	j = temp;
}

// arays are pass by reference by default
// declare array globally during cp

void func(int arr[][2]){
	arr[0][0] = 99;
}

int main(){
	int a = 3;
	int b = 5;
	cout<<a<<endl;
	cout<<b<<endl;
	increment(a, b);
	cout<<a<<endl;
	cout<<b<<endl;
	swap(a,b); // swap is also a inbuilt function
	cout<<max(a,b)<<endl; // in build function
	cout<<a<<b<<endl;
	int arr[2][2];
	arr[0][0] = 1;
	cout<<arr[0][0]<<endl;
	func(arr);
	cout<<arr[0][0]<<endl;
	return 0;
}