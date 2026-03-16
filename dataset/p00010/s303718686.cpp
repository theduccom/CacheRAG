#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		double a[6],matrix[4],ans[2];
		scanf("%lf %lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
		matrix[0] = 2*(a[0]-a[2]);
		matrix[1] = 2*(a[1]-a[3]);
		matrix[2] = 2*(a[0]-a[4]);
		matrix[3] = 2*(a[1]-a[5]);
		ans[0] = a[0]*a[0]+a[1]*a[1]-a[2]*a[2]-a[3]*a[3];
		ans[1] = a[0]*a[0]+a[1]*a[1]-a[4]*a[4]-a[5]*a[5];
		double t = matrix[0]*matrix[3]-matrix[1]*matrix[2];
		double x = matrix[3]*ans[0]/t-matrix[1]*ans[1]/t;
		double y = matrix[0]*ans[1]/t-matrix[2]*ans[0]/t;
		printf("%.3lf %.3lf %.3lf\n",x,y,sqrt((a[0]-x)*(a[0]-x)+(a[1]-y)*(a[1]-y)));
	}
}