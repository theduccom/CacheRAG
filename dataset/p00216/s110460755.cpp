#include <cstdio>
using namespace std;
int main() {
	int w;
	while(scanf("%d",&w),w!=-1) {
		int sum=1150;
		if(w>=30) {
			sum+=(w-30)*160;
			w=30;
		}
		if(w>=20) {
			sum+=(w-20)*140;
			w=20;
		}
		if(w>=10) {
			sum+=(w-10)*125;
			w=10;
		}
		printf("%d\n",4280-sum);
	}
}