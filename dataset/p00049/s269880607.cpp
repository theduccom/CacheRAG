#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char bl[2],s;
	int m[4]={0,0,0,0};
	while(scanf("%d,%s",&s,bl)!=EOF) {
		getchar();
        if (bl[0]=='A') if (bl[1]=='B') m[2]++; else m[0]++;
		if (bl[0]=='B') m[1]++;
		if (bl[0]=='O') m[3]++;
	}
	for (s=0;s<4;s++) cout << m[s] << endl;
	return 0;
}