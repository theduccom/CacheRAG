#include<cstdio>

int main(){
	int a,b,c;
	int d = 0, r = 0;
	while(1 + scanf("%d,%d,%d", &a, &b, &c)){
		if(a == b){
			d++;
		}else if(a * a + b * b == c *c){
			r++;
		}
	}
	printf("%d\n%d\n", r, d);
	return 0;
}