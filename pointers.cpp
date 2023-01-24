#include<bits/stdc++.h>
using namespace std;
int main(){

	// pointers are used to store address
	// double pointers are used to store address of address
	int x = 4;
	int *p_x = &x;
	cout<< "Addr x : "<< &x<<endl;
	cout<< "Value p_x : "<< p_x <<endl;
	cout<< "Value *p_x : "<< *p_x <<endl;
	*p_x = 5;
	cout<<"x :"<<x <<endl;
	cout<< "p_x + 1: "<< p_x +1 <<endl;
	// double pointers
	int **p_p_x = &p_x;
	cout<< "Addr p_x : "<< &p_x<<endl;
	cout<< "Value p_p_x : "<< p_p_x <<endl;
	cout<< "Value *p_p_x : "<< *p_p_x <<endl;
	cout<< "Value **p_p_x : "<< **p_p_x <<endl;
	**p_p_x = 7;
	cout<<"x :"<<x <<endl;


	// arrays
	int arr[10];
	arr[0] = 2;
	arr[1] = 4;
	cout<<"arr : "<<arr<<endl;
	cout<<"&a[0] " <<&arr[0]<<endl;
	cout<<"*arr : "<<*arr<<endl;
	cout<<"arr+1 :"<<arr+1<<endl;

	









	return 0;
}