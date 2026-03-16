#include <stdio.h>
#define MAX 60000
int main(void){
 	int i,j;
	int a[MAX+1];
	int n;
	int bn;
	while(scanf("%d",&n) != EOF){
		  for(i = 1; i <= MAX; i++){
			  a[i] = 0;
		  }
		  for(i = 2; i <= MAX; i++){
			  if(a[i]){continue;}
			  for(j = i; j <= MAX; j += i){
				  if(j == i){a[i] = 0;}
				  else{a[j] = 1;}
			  }
		  }
		  for(i = 2; i <= n; i++){
			if(n == i){
				printf("%d ",bn);
			} 
			  if(!a[i]){
				bn = i;	 
			  }
		  }
		  for(; a[i];i++){}
		  printf("%d\n",i);
	}
 	return 0;
}