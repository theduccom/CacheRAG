#include <cstdio>

using namespace std;

int main(){
	double a,sum;
	while(~scanf("%lf",&a)){
		sum=0;
		for(int i=0;i<10;i++){
			sum+=a;
			if(i%2==1){
				a=a/3;
			}
			else{
				a=a*2;
			}
		}
		printf("%.8lf\n",sum);
	}
	return 0;
}