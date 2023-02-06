#include<iostream>
using namespace std;
void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            if((i+j)%2==0){
                cout<<"0 ";
            }else {
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
}