#include<stdio.h>
int main(void)
{
	char a[3];
	int s[5],d,i;
	for(i=1;i<=4;i++)	s[i]=0;
	while(scanf("%d,%s",&d,a)!=EOF){
		if(a[0]=='A'&&a[1]=='B'){
			s[3]++;
		}
		else if(a[0]=='A'){
			s[1]++;
		}
		else if(a[0]=='B'){
			s[2]++;
		}
		if(a[0]=='O'){
			s[4]++;
		}
		
	}
	for(i=1;i<=4;i++){
		printf("%d\n",s[i]);
	}
	return 0;
}