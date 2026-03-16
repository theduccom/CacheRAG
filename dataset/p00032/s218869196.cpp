#include<cstdio>
#include<algorithm>

using namespace std;

int a[3];
int cnt[2];
int main(void){
	while(~scanf("%d,%d,%d",&a[0],&a[1],&a[2])){
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])cnt[0]++;
		if(a[0]==a[1])cnt[1]++;
	}
	printf("%d\n",cnt[0]);
	printf("%d\n",cnt[1]);
	return 0;
}