#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n,a[4]={0};
    char c[3];
    while(EOF!=scanf("%d,%s",&n,c)){
        if(c[0]=='A'&&c[1]!='B')a[0]++;
        if(c[1]=='B')a[2]++;
        if(c[0]=='B')a[1]++;
        if(c[0]=='O')a[3]++;
    }
    printf("%d\n%d\n%d\n%d\n",a[0],a[1],a[2],a[3]);
	return 0;
}