#include <iostream>
using namespace std;

int main() {
	int i,k,n,a[10];
	while(cin >> n && n!=0) {
	for (i=0;i<10;i++) a[i]=0;	
	for (i=0;i<n;i++) { cin >> k; a[k]++;}
	for (i=0;i<10;i++) {
		if (a[i]==0) { cout << '-' << endl; continue;}
		for (k=0;k<a[i];k++) cout << '*'; cout << endl;
		}
}
	return 0;
}