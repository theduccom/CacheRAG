#include <stdio.h>

int isprime(int n) {
	int i;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1; 
}

int main(){
	int k,suu,an1,an2;
	int su[10000]={0};
    for(k=0;k<10000;k++){
    	if(isprime(k)==1)  su[k]=1;
    }
    while(1){
        scanf("%d",&suu);
        if(suu != 0){
            for(k=2;k<=suu;k++){
            	if(su[k-2]==1 && su[k]==1){
        	    	an1=k-2;
        	    	an2=k;
            	}
            }
            printf("%d %d\n",an1,an2);
        }
        else{
    	    break;
        }
    }
}