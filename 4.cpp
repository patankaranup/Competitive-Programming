#include <bits/stdc++.h>
using namespace std;
int main(){
	string str = "Hello";
	cout<<str<<endl;
	string str1;
	cin.ignore(); // ignores a word or empty space  after cursor 
	getline(cin, str1);
	cout<<str1<<endl;
	cout<<str1[0]<<endl;
	cout<<str1.size()<<endl;
	for(int i = 0; i<str1.size(); ++i){
		cout<<str1[i]<<endl;
	}
	return 0;
}