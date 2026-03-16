#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        double xa,ya,ra,xb,yb,rb;
        scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&ra,&xb,&yb,&rb);
         
        double num;
		num = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));
         
        if(num + ra < rb)puts("-2");
		else if(num > ra + rb)puts("0");
        else if(num + rb < ra)puts("2");
        else puts("1");
    }
	return 0;
}