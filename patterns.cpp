#include <bits/stdc++.h>
using namespace std;

int main(){
	int test_cases;
	cin>>test_cases;

	while(test_cases--){
		int n;
		cin>>n;
		for (int i = 0; i<n; i++ ){
			for (int j = 0; j<=i;j++){
				cout<<" *";
			}
			cout<<endl;
		}
	}

	for (int i = 0; i<10;i++){
		if (i==3){
			continue;
		}
		if (i==9){
			break;
		}
		cout<<i<<endl;
	}
	return 0;

}