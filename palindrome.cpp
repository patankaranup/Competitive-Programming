#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1;
	cin>>str1;
	string str2;

	for (int i = str1.size()-1; i>=0; i--){
		str2.push_back(str1[i]);
	}
	cout<<str2<<endl;
	if (str1 == str2){
		cout<<"Yes"<<endl;
	} else{
		cout<<"No"<<endl;
	}

	return 0;
}