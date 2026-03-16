#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int a,s[10001][4],d[10001],f,g,h,i,j;
	while(1){
		scanf("%d",&a);
		if(a==0) break;
		f=0;
		for(i=0;i<a;i++){
			d[i]=0;
			for(j=0;j<3;j++){
				scanf("%d",&s[i][j]);
				if(j!=0) d[i]+=s[i][j];
			}
			if(f<d[i]){
				f=d[i];
				g=s[i][0];
			}
		}
		printf("%d %d\n",g,f);
	}
	return 0;
}