#include<stdio.h>
int main(){
	while(1){
		int a;
		scanf("%d",&a);
		if(a==0)break;
		int cnt = 0;
		while(a!=0){
			cnt += a/5;
			a/=5;
		}
		printf("%d\n",cnt);
	}
}