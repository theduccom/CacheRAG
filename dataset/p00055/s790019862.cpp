#include<cstdio>

using namespace std;

int main(void){
	double a;
	
	while(scanf("%lf", &a) != EOF){
		double n[11];
		n[1] = (double)a;
		
		for(int i = 2; i < 11; i++){
			if(i%2){
				n[i] = n[i-1]/3;
			}else{
				n[i] = n[i-1]*2;
			}
		}
		
		double ans = 0;
		for(int i = 1; i < 11; i++){
			ans += n[i];
		}
		
		printf("%lf\n", ans);
	}
	return 0;
}