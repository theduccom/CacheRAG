#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int x,h;
	while(scanf("%d%d",&x,&h),x||h){
		printf("%.5f\n",x*(x+sqrt(x*x/4.+h*h)*2));
	}
	return 0;
}