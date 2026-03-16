#include <bits/stdc++.h>
using namespace std;

int main() {
	double n;
	while(cin >> n){
		double ans = n;
		double prev = n;
		for(int i = 2; i <= 10; ++i){
			if(i % 2){
				prev = prev / 3.0;
				ans += prev;
			}
			else{
				prev = prev * 2.0;
				ans += prev;
			}
		}
		printf("%f\n", ans);
	}
	return 0;
}