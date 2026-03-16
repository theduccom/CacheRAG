#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int n;
	while(scanf("%d",&n),n) {
		for(int i=0;i<n;i++) {
			int pm,pe,pj;
			scanf("%d %d %d",&pm,&pe,&pj);
			if(max(pm,max(pe,pj))==100||(pm+pe)>=180||(pm+pe+pj)>=240) {
				printf("A\n");
			}else if((pm+pe+pj)>=210||((pm+pe+pj)>=150&&max(pm,pe)>=80)) {
				printf("B\n");
			}else {
				printf("C\n");
			}
		}
	}
}