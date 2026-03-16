#include <cstdio>
using namespace std;

int main(){
	double a[10];
	double sum;
	
	while(scanf("%lf", &a[0]) != EOF){
		for(int i = 1; i < 10; i++){
			if((i + 1) % 2 == 0){
				a[i] = a[i - 1] * 2;
			}
			else{
				a[i] = a[i - 1] / 3;
			}
		}
		
		sum = 0;
		for(int i = 0; i < 10; i++){
			sum += a[i];
		}
		
		printf("%lf\n", sum);
	}
	
	return 0;
}