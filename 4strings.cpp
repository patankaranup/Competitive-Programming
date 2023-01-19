#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	cout<<s[s.size()-1]<<endl;
	// ascii value
	cout<<(int)s[s.size()-1]<<endl;
	// integer value
	int last_digit = (int)s[s.size()-1] - '0';
	cout<<last_digit<<endl;

	return 0;
}