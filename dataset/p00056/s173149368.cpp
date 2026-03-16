#include<iostream>
#define m 52000
using namespace std;

bool ba[m+1] = { true };
void cp() {
	int co = 0;
	for (int i = 0; i < m+1; i++) {
		ba[i] = { true };
	}
	for (int i = 2; i*i <= 52000; i++) {
		if (ba[i]) {
			for (int j = i*i; j <= 52000; j += i) {
				ba[j] = { false };
			}
		}
	}
	
	return ;
}

int main() {
	int n;
	cp();
	while (cin >> n,n) {
		int c = 0;
		for (int i = 2;i <= n / 2;i++) {
			int j = n - i;
			if (ba[i]==true && ba[j]==true)c++;
		}
		cout << c << endl;
	}
	return 0;
}