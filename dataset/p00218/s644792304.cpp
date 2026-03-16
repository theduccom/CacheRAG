#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int a,s[10001][4],d[10001],f,g,h,j,i,k;
	while(1){
		scanf("%d",&a);
		if(a==0) break;
		for(i=0;i<a;i++){
			for(j=0;j<3;j++) scanf("%d",&s[i][j]);
				if(s[i][0]==100||s[i][1]==100||s[i][2]==100) d[i]=1;
				else if((s[i][0]+s[i][1])/2>=90) d[i]=1;
				else if((s[i][0]+s[i][1]+s[i][2])/3>=80) d[i]=1;
				else if((s[i][0]+s[i][1]+s[i][2])/3>=70) d[i]=2;
				else if((s[i][0]+s[i][1]+s[i][2])/3>=50&&s[i][0]>=80||s[i][1]>=80) d[i]=2;
				else d[i]=3;
		}
		for(i=0;i<a;i++){
			if(d[i]==1) printf("A\n");
			if(d[i]==2) printf("B\n");
			if(d[i]==3) printf("C\n");
		}
	}
	return 0;
}