#include <iostream>;
#include <math.h>
using namespace std;

int a[100000];

void sosuu() {
	a[0] = 2;
	int k, z = 1;
	for (int i = 3; i<100000; i++) {
		k = 0;
		for (int j = 0; a[j] <= sqrt(i); j++) {
			if (i%a[j] == 0) {
				k++;
				break;
			}
		}
		if (k == 0) {
			a[z] = i;
			z++;
		}
	}
	return;
}

int nibun(int n, int s, int e){
	if (s >= e) return s;
	if(a[(s + e)/2] < n){
		if(a[(s+e)/2 + 1]>n ){
			return (s + e) / 2;
		}
		return nibun(n, (s + e) / 2 + 1, e);
	}
	else if(a[(s + e) / 2] > n){
		return nibun(n, s, (s + e) / 2 - 1);
	}
	else return (s + e) / 2;
}


int main(){
	sosuu();
	int n, k;
	while(cin >> n){
		int ret = nibun(n, 0, 10000);
		if(n == a[ret]){
			cout << a[ret - 1] << " " << a[ret + 1] << endl;
		}

		else cout << a[ret] << " " << a[ret + 1] << endl;
	}
	return 0;
}