#include<cstdio>
#include<cmath>

int main(){
	int n;
	double xa,ya,ra,xb,yb,rb;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lf %lf %lf %lf %lf %lf", &xa,&ya,&ra,&xb,&yb,&rb);
		double d = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
		int a = 0;
		if(d <= ra + rb){
			a++;
		}
		if(d + rb < ra){
			a++;
		}
		if(d + ra < rb){
			a++;
			a *= -1;
		}
		printf("%d\n", a);
	}
}