//Vol0 0023
#include<stdio.h>
#include<math.h>
int main()
{
	int n,r=0;
	double xa,ya,ra,xb,yb,rb,ht;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&ra,&xb,&yb,&rb);
		ht=sqrt(((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)));
		if(ra+rb<ht){
			r=0;
		}else if(ht+rb<ra){
			r=2;
		}else if(ht+ra<rb){
			r=-2;
		}else{
			r=1;
		}
		printf("%d\n",r);
	}
	return 0;
}