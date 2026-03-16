#include <cstdio>
int main() {
	int b1,b2,b3;
	scanf("%d %d %d",&b1,&b2,&b3);
	if(b1) {
		if(b2) printf("Open\n"); else printf("Close\n");
	}else {
		if(b2) printf("Close\n");
		else if(b3) printf("Open\n");
		else printf("Close\n");
	}
}