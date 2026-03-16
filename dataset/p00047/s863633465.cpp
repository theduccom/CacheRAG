#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int b[3]={1,0,0},i;
	char x,y;
	while(scanf("%c,%c",&x,&y)!=EOF) { swap(b[x-'A'],b[y-'A']); getchar(); }
	for (i=0;i<3;i++) if (b[i]==1) cout << (char)('A'+i) << '\n';
 return 0;
}