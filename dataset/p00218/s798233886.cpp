#include<stdio.h>
int main(void)
{
    int n,i,a,b,c,w[10000];
	while(1){
	    scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
		    scanf("%d %d %d",&a,&b,&c);
			if(a==100||b==100||c==100||(a+b)/2>=90||(a+b+c)/3>=80) w[i]=1;
			else if((a+b+c)/3>=70||(a+b+c)/3>=50&&(a>=80||b>=80)) w[i]=2;
			else w[i]=3;
		}
		for(i=0;i<n;i++){
		    if(w[i]==1) printf("A\n");
		    if(w[i]==2) printf("B\n");
		    if(w[i]==3) printf("C\n");
		}
	}
	return 0;
}