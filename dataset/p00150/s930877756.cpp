#include <iostream>
using namespace std;
#define MAX (10001)

bool prime[MAX];

int main(){
	int n;
	for(int i=2; i<MAX; i++) prime[i] = true;
	for(int i=2; i<MAX; i++){
		if( prime[i] ){
			for(int j=i+i; j<MAX; j+=i){
				prime[j] = false;
			}
		}
	}
	while( cin >> n, n ){
		for(int i=n; 0<i; i--){
			if( prime[i] && prime[i-2] ){
				cout << i-2 << " " << i  << endl;
				break;
			}
		}
	}
}