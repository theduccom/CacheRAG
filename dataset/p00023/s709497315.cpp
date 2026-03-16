#include<stdio.h>
#include<math.h>

int main(){
	int N;
	double xa,ya,ra,xb,yb,rb,r;
	
	scanf("%d",&N);
	while(N--){
		scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&ra,&xb,&yb,&rb);
		r=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
		if(ra>rb+r){
			printf("2\n");
		}else if(rb>ra+r){
			printf("-2\n");
		}else if(r<=ra+rb){
			printf("1\n");
		}else{
			printf("0\n");
		}
	}
	return 0;
}