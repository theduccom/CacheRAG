#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
    char b[100],a[1000];
	int i,j,k;
	while(gets(b)!=NULL) {
    i=0; j=0; 
	while(i<strlen(b)) {
		if (b[i]=='@') {
			for (k=j;k<j+(b[i+1]-'0');k++) a[k]=b[i+2];
			j=k; i+=3;
		} else a[j++]=b[i++];
	}
	a[j]='\0';
	cout << a << endl;
	}
	return 0;
}