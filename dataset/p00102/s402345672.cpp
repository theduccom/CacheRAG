#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int a,s[100][100],d,f,g,h,i,j;
	while(1){
		scanf("%d",&a);
		if(a==0)	break;
		for(i=0;i<a;i++){
			for(j=0;j<a;j++){
				s[i][a]=0;
				s[a][i]=0;
				scanf("%d",&s[i][j]);
			}
		}
		s[a][a]=0;
		for(i=0;i<a;i++){
			for(j=0;j<a;j++){
				s[i][a]+=s[i][j];
				s[a][i]+=s[j][i];
			}
			s[a][a]+=s[i][a];
		}
		for(i=0;i<=a;i++){
			for(j=0;j<=a;j++){
				printf("%5d",s[i][j]);
	//			if(j!=a)	printf(" ");	
			}
			printf("\n");
		}
	}
	return 0;
}