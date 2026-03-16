#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	long long int x,y,z,d,r[10001];
	int n,i;
	while(cin >> x >> y >> z) {
		if (x+y+z==0) break;
		cin >> n;
		for (i=0;i<n;i++) cin >> r[i];
        d=min(x*x+z*z,min(x*x+y*y,y*y+z*z));
        for (i=0;i<n;i++) if (4*r[i]*r[i]>d) cout << "OK" << endl; else cout << "NA" << endl;
	} 
    return 0;
	}