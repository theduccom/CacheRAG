
#include <stdio.h>

int p[10001];

int main(void)
{
  	unsigned i,k, n;
  	for (i = 0; i < 10000; i++){
   		p[i] = 1; 
 	}
	p[0] = 0;   
 
 	for (i = 2; i*i <= 10000; i++) {
    	if (p[i] == 1) {
     		for (k = 2*i; k <=10000 ; k += i){
        		p[k] = 0;  
  			}
		}
	}
	
	while(1){
		scanf("%d" , &n);
		if(n == 0)
			break;
		for(i = n ; i > 1;i--){
			if(p[i]*p[i -2] ==1)
				break;
		}
			if(n >= 5)
				printf("%d %d\n",i-2,i);
	}
		return 0;
}