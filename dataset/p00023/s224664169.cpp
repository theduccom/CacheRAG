#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
	int main(){
		int n;
		double xa,xb,ya,yb,ra,rb,l,r1,r2;
		scanf("%d",&n);
		while(n-->0){
			scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&ra,&xb,&yb,&rb);
			l=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
			r1=ra+rb;
			r2=ra-rb;
			if(l>r1*r1)
					printf("0\n");
			else if(r1*r1>l&&r2*r2<l)
					printf("1\n");
			else if(r2*r2>l){
				if(r2>0)
					printf("2\n");
				else printf("-2\n");
			}
			else printf("1\n");
	 
		}
		return 0;
}