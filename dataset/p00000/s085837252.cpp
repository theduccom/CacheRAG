#include<iostream>
using namespace std;
#define rep(i,n) for(i = 1;i < n;i++)

int main(){
	int i,j;
	rep(i,10){
		rep(j,10){
			cout << i << "x" << j << "=" << i*j << endl;
		}
	}
	return 0;
}