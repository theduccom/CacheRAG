#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	unsigned int i,n,s,k;
	while(cin >> n) {
		if (n==0) break;
        s=0; 
		for (i=0,k=5;i<13;i++,k*=5) s+=n/k;
		cout << s << endl;
	}
	return 0;
}