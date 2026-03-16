#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int n;
	while(scanf("%d",&n),n) {
		int cnt[10]={0};
		for(int i=0;i<n;i++) {
			int x;
			scanf("%d",&x);
			cnt[x]++;
		}
		for(int i=0;i<10;i++) {
			for(int j=0;j<cnt[i];j++) {
				printf("*");
			}
			if(cnt[i]==0) printf("-");
			printf("\n");
		}
	}
}