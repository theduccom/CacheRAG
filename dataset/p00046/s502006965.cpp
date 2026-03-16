#include<cstdio>

int main(){
	double t;
	scanf("%lf", &t);
	double max = t, min = t;
	while(~scanf("%lf", &t)){
		if(max < t){
			max = t;
		}
		if(min > t){
			min = t;
		}
	}
	printf("%lf", max - min);
}