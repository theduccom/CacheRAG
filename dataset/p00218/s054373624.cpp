#include<stdio.h>
int main(void)
{
	int n,a,s,d,i,w,t;
	while(1){
	  scanf("%d",&n);
	   if(n==0)	break;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&a,&s,&d);
			t=(a+s)/2;
			w=(a+s+d)/3;
		if(a==100||s==100||d==100){
			printf("A\n");
		}
		else if(t>=90||w>=80){
			printf("A\n");
		}	
		else if(w>=70){
			printf("B\n");
		}
		else if(w>=50&&a>=80||s>=80){
			printf("B\n");
		}
		else{
			printf("C\n");
		}
	   }
	 }
   return 0;
}   