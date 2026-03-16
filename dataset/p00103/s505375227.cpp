//0103
#include<string.h>
#include<stdio.h>
int main()
{
	int n,op,f,se,t,r=0;
	char in[16];
	scanf("%d",&n);
	while(n--){
		r=0;
		op=0;
		f=0;
		se=0;
		t=0;
		while(op<3){
			scanf("%s",in);
			if(in[1] == 'I'){
				r+=t;
				t=se;
				se=f;
				f=1;
			}else if(in[1] == 'U'){
				op++;
			}else{
				r+=f+se+t+1;
				f=0;
				se=0;
				t=0;
			}
		}
		printf("%d\n",r);
	}
	return 0;
}