#include<cstdio>

int main(){
	int a,b,c,x=0,y=0;
	while( scanf("%d,%d,%d",&a,&b,&c) != EOF ){
		if(a==b)x++;
		if(a*a+b*b==c*c)y++;
	}
		printf("%d\n%d\n",y,x);
	return 0;
}