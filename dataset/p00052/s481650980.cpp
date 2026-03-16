#include <cstdio>
int main() {
int n;
while(scanf("%d",&n),n) {
	int five=0;
	for(int i=1;i<=n;i++) {
		for(int j=i;j%5==0;j/=5)five++;
	}
	printf("%d\n",five);
}
}