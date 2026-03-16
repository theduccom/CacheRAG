#include<stdio.h>
int main()
{
	int t[128],s[128],n=0,r1=0,r3,r;
	double r2;
	while(scanf("%d,%d",&t[n],&s[n])!=EOF){
		n++;
	}
	for(int i=0;i<n;i++){
		r1+=(t[i]*s[i]);
		r3+=s[i];
	}
	r2=(double)r3/(double)n;
	r=(int)r2+0.5/10*10+1;
	printf("%d\n%d\n",r1,r);
}