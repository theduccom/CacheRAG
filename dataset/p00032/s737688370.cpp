#include <cstdio>
int main(){
	int a,b,c,sq=0,di=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a*a+b*b==c*c)sq++;
		else if(a==b)di++;
	}
	printf("%d\n%d\n",sq,di);
	return 0;
}