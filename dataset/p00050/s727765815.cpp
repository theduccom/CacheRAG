#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	char c[1005],ap[6]="apple",pe[6]="peach";
	int x=0,i,f;
	gets(c);
	while(x+4<strlen(c)) {
	 f=0;
	 for (i=0;i<5;i++) if (c[x+i]==ap[i]) f++;
	 if (f==5) for (i=0;i<5;i++) c[x+i]=pe[i];
	 if (f==0) {
		 for (i=0;i<5;i++) if (c[x+i]==pe[i]) f++;
		 if (f==5) for (i=0;i<5;i++) c[x+i]=ap[i];
	 }
	 if (f==5) x+=5; else x++;
	}
	cout << c << endl;
	return 0;
}