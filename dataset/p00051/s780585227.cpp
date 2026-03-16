#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	int n,h,l,s,i,j;
	char da[10],a;
	cin >> n;
	for (n;n>0;n--) {
		scanf("%s",da);
		sort(da,da+8);
		h=l=0;
		for (i=0,s=10000000;i<8;i++,s/=10) {
			h+=(da[7-i]-'0')*s; l+=(da[i]-'0')*s;
		}
        cout << h-l << endl;
	}
	return 0;
}