#include <iostream>
using namespace std;

bool is_sosu(int n){
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int t_sosu(int n){
	int count = 0;
	int total = 0;
	for(int i = 2; count < n; i++){
		if(is_sosu(i)){
			count++;
			total += i;
		}
	}
	return total;
}

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		cout << t_sosu(n) << endl;
	}
	return 0;
}