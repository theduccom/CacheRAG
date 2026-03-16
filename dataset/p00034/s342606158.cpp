#include<bits/stdc++.h>
using namespace std;
double a[15],b;
signed main(void){
	while(scanf("%lf,",&a[1])!=EOF){
		for(int i=2;i<12;i++)
			scanf("%lf,",&a[i]);
		scanf("%lf",&a[12]);
		b=0;
		for(int i=1;i<=10;i++)
			b+=a[i];
		b=(b*a[11])/(a[11]+a[12]);
		for(int i=1;i<=10;i++){
			b-=a[i];
			if(b<=0){
				printf("%d\n",i);
				break;	
			}
		}
	}
}