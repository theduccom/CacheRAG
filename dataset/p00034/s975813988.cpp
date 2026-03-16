#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	int l[10],sum;
	double x,y;
	double v1,v2;
	while(scanf("%d",&l[0])!=EOF){
		sum=l[0];
		for(int i=1;i<10;i++){
			scanf(",%d",&l[i]);
			sum+=l[i];
		}
		scanf(",%lf,%lf",&v1,&v2);
		x=(v1*sum)/(v1+v2);
		y=sum-x;
		int pass;
		double temp=0;
		for(int i=0;i<10;i++){
			temp+=l[i];
			if(temp>=x){
				pass=i;
				break;
			}
		}
		printf("%d\n",pass+1);
	}
}