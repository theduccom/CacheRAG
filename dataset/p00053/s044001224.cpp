#include <iostream>
#include <stdio.h>
using namespace std;

int f[110000],pr[11000];

int main() {
	int n=0,i,j,s=0;
	for (i=2;i<110000;i++) {
		if (f[i]==0) { s+=i; pr[n++]=s; for (j=i;j<110000;j+=i) f[j]=1;}
		}
	while(cin >> n) {
		if (n==0) break;
		cout << pr[n-1] << endl;
	}
	return 0;
}