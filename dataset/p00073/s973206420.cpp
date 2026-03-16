#include<stdio.h>
#include<math.h>

int main(){
	
	int x,h,i,con=0;
	double ru=0,num[200]={0},y;
		for(i=0;;i++){
	scanf("%d %d",&x,&h);
			
			ru=(double)x*x/4+h*h;
			y=sqrt(ru);
			num[i]=(double)x*x+2*x*y;
			con=con+1;
	if((x==0)&&(h==0)){
			con=con-1;
			break;
		}
	}
	for(i=0;i<con;i++)printf("%f\n",(double)(num[i]));
	return 0;
}
	