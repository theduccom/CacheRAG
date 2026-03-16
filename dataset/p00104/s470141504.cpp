#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int a,s,d,i,j,f,g,c[500][500],v;
	char z[1000][1000],x;
	while(1){
		v=0;
		scanf("%d %d",&a,&s);
		if(a==0&&s==0)	break;
		for(i=0;i<a;i++){
			for(j=0;j<s;j++)
				z[i][j]=0;
		}
		for(i=0;i<a;i++){
			scanf("%s",z[i]);
		}
		for(i=0;i<a;i++){
			for(j=0;j<s;j++){
				c[i][j]=0;
			}
		}
		f=0;
		g=0;
		while(1){
			if(z[f][g]=='>'){
				g++;
				c[f][g]++;
			//	printf("%d %d\n",f,g);
			}
			else if(z[f][g]=='<'){
				g--;
				c[f][g]++;
			//	printf("%d %d\n",f,g);
			}
			else if(z[f][g]=='^'){
				f--;
				c[f][g]++;
			//	printf("%d %d\n",f,g);
			}
			else if(z[f][g]=='v'){
				f++;
				c[f][g]++;	
			//	printf("%d %d\n",f,g);
			}
			if(z[f][g]=='.')	break;
			if(c[f][g]==2){
				v=1;
				break;
			}
		}
		if(v==1)
			printf("LOOP\n");
		else
			printf("%d %d\n",g,f);
	}
		return 0;
}