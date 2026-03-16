#include<cstdio>
using namespace std;
int main(){
	double s,a;
	while(scanf("%lf",&a)!=EOF){
		s=0;
		for(int i=1;i<=10;i++){
			s+=a;
			if(i&1)a*=2;
			else a/=3;
		}
		printf("%.6f\n",s);
	}
	return 0;
}