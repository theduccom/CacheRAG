#include <string>
#include <iostream>
using namespace std;
int a[100]; string s;
int main() {
	while(cin >> s) {
		int n = s.size();
		for(int i = 0; i < n; i++) {
			switch(s[i]) {
				case 'I': a[i] = 1; break;
				case 'V': a[i] = 5; break;
				case 'X': a[i] = 10; break;
				case 'L': a[i] = 50; break;
				case 'C': a[i] = 100; break;
				case 'D': a[i] = 500; break;
				case 'M': a[i] = 1000; break;
			}
		}
		int ret = 0;
		for(int i = 0; i < n - 1; i++) {
			if(a[i] >= a[i + 1]) ret += a[i];
			else ret -= a[i];
		}
		printf("%d\n", ret + a[n - 1]);
	}
	return 0;
}