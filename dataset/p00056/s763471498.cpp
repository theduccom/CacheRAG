#include <iostream>
#include <stdio.h>
using namespace std;

int f[50001],pr[5500];

int main() {
	int i,j,n=0,cn;
	for (i=2;i<50001;i++) if (f[i]==0) { f[i]=1; pr[n++]=i; for (j=i+i;j<50001;j+=i) f[j]=2;}
	while(cin >> n) {
		if (n==0) break;
		cn=0;
		for (i=0;n/2>=pr[i];i++) if (f[n-pr[i]]==1) cn++;
		cout << cn << endl;
	}
	return 0;
}