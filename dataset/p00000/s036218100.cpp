#include<cstdio>
#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%dx%d=%d\n", i, j, i*j);
		}
	}
	return 0;
}