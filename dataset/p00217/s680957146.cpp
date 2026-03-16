#include <cstdio>
using namespace std;
int main() {
	int n;
	while(scanf("%d",&n),n) {
		int p,d1,d2;
		int max_d=0,max_p=0;
		for(int i=0;i<n;i++) {
			scanf("%d %d %d",&p,&d1,&d2);
			if(max_d<(d1+d2)) {
				max_d=(d1+d2);
				max_p=p;
			}
		}
		printf("%d %d\n",max_p,max_d);
	}
}