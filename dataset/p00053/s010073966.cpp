#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
	vector<int> array;
	bool prime[1000001];
	long long int n,t,a = 0,i,j = 0;
	for (i = 3; i <= 1000000; i += 2){
		prime[i] = true;
	}
	prime[2] = true;
	for (i = 3; i <= 1000; i += 2){
		if (prime[i] == 1){
			for (j = 3; j <= 1000000 / i; j += 2){
				prime[i * j] = false;
			}
		}
	}
	for(int i = 2;i<=1000000;i++){
		if(prime[i] == true) {
			array.push_back(i);
			a++;
		}
	}
	while(cin >> n && n){
		t = 0;
		for(int i = 0;i<n;i++){
			t+=array[i];
		}
		cout << t << endl;
	}
	return 0;
}