#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	long long n;
	while (cin >> n, n){
		int ans = 0;
		for (int i = n - 1; i > 1; i--){
			n *= i;
			while (n != 0 && n % 10 == 0){
				n /= 10;
				ans++;
			}
			n %= 30000;
			//printf("%d ", n);
		}
		printf("%d\n", ans);
	}
	return 0;
}