#include <iostream>
using namespace std;

bool is_sosu(int a){
	for(int i = 2; i * i <= a;i++){
		if(a % i == 0) return false;
	}
	return true;
}

int main(){
	int n;
	while(cin >> n){
		for(int i = n - 1; i >= 2; i--){
			if(is_sosu(i)) {
				cout << i << " ";
				break;
			}
		}
		for(int j = n+1;;j++){
			if(is_sosu(j)){
				cout << j << endl;
				break;
			}
		}
	}
	return 0;
}