#include<stdio.h>
#include<math.h>
int main(void)
{
	int t,y,h,n;
	int a,b,c;
	int s,s1,s2[10000],i;
	int r[10000];

	scanf("%d %d %d",&t,&y,&h);
	while(t!=0 && y!=0 && h!=0){
		a=t+y;
		b=t+h;
		c=y+h;
		if(a<b && a<c){
			s=t*t+y*y;
			s1=sqrt(s);
		}
		else if(b<a && b<c){
			s=t*t+h*h;
			s1=sqrt(s);
		}
		else if(c<a && c<b){
			s=y*y+h*h;
			s1=sqrt(s);
		}

		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&r[i]);
			s2[i]=r[i]*2;
			if(s1<s2[i]){
				printf("OK\n");
			}
			else {
				printf("NA\n");
			}
		}
		scanf("%d %d %d",&t,&y,&h);
	}
	return 0;
}