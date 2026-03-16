#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int a,s[10001],d,f,g,h,i,j;
	for(i=2;i<=10000;i++)	s[i]=1;
		s[1]=0;
	for(i=2;i<=10000;i++){
		if(s[i]==1){
			for(j=2;j<=5000;j++){
				if(i*j<=10000)
					s[i*j]=0;
			}
		}
	}
	while(1){
		d=0;
		f=0;
		scanf("%d",&a);
		if(a==0)	break;
		for(i=a;i>0;i--){
			if(s[i]==1){
				if(d==0) d=i;
				else f=i;
			}
			if(d!=0&&f!=0){
				if(d-f==2)
					break;
				d=f;
			}
		}
		printf("%d %d\n",f,d);
	}
	return 0;
}