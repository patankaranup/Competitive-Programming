#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int product = 1;
	for(int i = 0; i<num; i++){
		int element;
		cin>>element;
		product = (1LL * product * element)%mod;
	}
	cout<<product<<endl;
	return 0;
}