#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<queue>

using namespace std;

int main(){
	double d,w,h;
	int n,r;
	double dt;
	while(1){
		scanf("%lf %lf %lf",&d,&w,&h);
		if(d==0&&w==0&&h==0) break;
		dt=min(sqrt(d*d+w*w),min(sqrt(w*w+h*h),sqrt(h*h+d*d)));
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&r);
			r*=2;
			if(r>dt) printf("OK\n");
			else printf("NA\n");
		}
	}
}
