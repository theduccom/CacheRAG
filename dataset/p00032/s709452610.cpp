#include <stdio.h>

int main(){
	int a,b,c,d = 0,e = 0;
	while(scanf("%d,%d,%d",&a,&b,&c) != EOF){
		if(a * a + b * b == c * c) d++;
		if(a == b) e++;
	}
	printf("%d\n%d\n",d,e);
	return 0;
}