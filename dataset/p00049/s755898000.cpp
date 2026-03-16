#include<stdio.h>
#include<string.h>
int main()
{
	int n,l[4]={0};
	char b[3];
	while(scanf("%d,%s",&n,b)!=EOF){
		if(strcmp("A",b)==0){
			l[0]++;
		}else if(strcmp("B",b)==0){
			l[1]++;
		}else if(strcmp("AB",b)==0){
			l[2]++;
		}else{
			l[3]++;
		}
	}
	for(int i=0;i<4;i++){
		printf("%d\n",l[i]);
	}
	return 0;
}