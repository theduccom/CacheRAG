#include<stdio.h>
#include<math.h>

int main()
{
	int yoko,tate,high;
	int n,i,j,temp;
	int hole[10000];
	
	double taikaku;
	
	for(;;){
		scanf("%d%d%d",&tate,&yoko,&high);
		if(tate==0)break;
		
		taikaku=sqrt(yoko*yoko+high*high);
		
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			scanf("%d",&temp);
			hole[i]=temp*2;
		}
		
		for(i=0;i<n;i++){
			if(hole[i]>taikaku)puts("OK");
			if(hole[i]<taikaku)puts("NA");
			if(hole[i]==taikaku)puts("NA");
		}
		
		
	}
	return 0;
}