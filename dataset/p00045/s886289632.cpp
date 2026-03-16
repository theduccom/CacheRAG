#include <cstdio>

int main(){
	int p,n;
	int c=0,pr=0,num=0;
	while( scanf("%d,%d",&p,&n) != EOF){
		c++;
		pr += p*n;
		num += n;
	}
	printf("%d\n%d\n",pr,(num*10/c+5)/10);

	return 0;
}