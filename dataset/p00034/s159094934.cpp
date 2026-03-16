#include<cstdio>

int main(){
	int l[10],x,y,i;
	double par;
	while( scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d"
	,&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&x,&y) != EOF ){
		par=0;
		for(i=0;i<10;i++){
			par+=l[i];
		}
		par = par*x/(x+y);
		for(i=0;par>0;i++){
			par-=l[i];
		}
		printf("%d\n",i);
	}
	return 0;
}