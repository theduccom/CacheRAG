#include<iostream>
#include<cmath>
using namespace std;

int main(void){
	int n;
	double x[2],y[2],r[2];
	double lo;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin >> x[0] >> y[0] >> r[0] >> x[1] >> y[1] >> r[1];
		lo=sqrt(pow(abs(x[0]-x[1]),2)+pow(abs(y[0]-y[1]),2));
		if(r[0]>r[1] && r[0]>r[1]+lo)printf("2\n");
		else if(r[1]>r[0] && r[1]>r[0]+lo)printf("-2\n");
		else if(lo<=r[0]+r[1])printf("1\n");
		else printf("0\n");
	}
    return 0;
}