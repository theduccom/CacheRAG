#include<cstdio>

using namespace std;

double num(double);

int main(void){
	double a,sum;

	while((scanf("%lf",&a))!=EOF){
		sum=num(a);
		printf("%.6f\n",sum);
	}

	return 0;
}

double num(double x){
	int i;
	double data[11],sum=0;

	data[1]=x;
	for(i=2;i<=10;i++){
		if(i%2==0){
			data[i]=data[i-1]*2;
		}
		else{
			data[i]=data[i-1]/3;
		}
	}
	for(i=1;i<=10;i++){
		sum+=data[i];
	}

	return sum;
}