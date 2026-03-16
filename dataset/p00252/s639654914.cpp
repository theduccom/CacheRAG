#include <cstdio>

int main(){
	int b[3];
	for(int i = 0; i < 3; i++) scanf("%d", &b[i]);
	if((b[0]==1&&b[1]==1)||b[2]==1) printf("Open\n");
	else printf("Close\n");
}