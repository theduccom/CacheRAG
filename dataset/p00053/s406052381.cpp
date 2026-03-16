#include <iostream>
#include <cmath>
using namespace std;

int a[20000] = {};

int sosuu() {
	a[0] = 0;
	int k = 1, z;
	for (int i = 2; i<100000 || k<10001; i++) {
		z = 0;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				z++;
				break;
			}
		}
		if(z==0){
			a[k] = i;
			k++;
		}
	}
	return 0;
}

int main(){
	sosuu();
	int in;
	long int ans;
	while (cin >> in){
		if (in == 0) { break; }
		ans = 0;
		for(int i = 1; i<=in;i++){
			ans += a[i];
		}
		cout << ans << endl;
	}
	return 0;
}