#include <cstdio>
#include <algorithm>
#include <functional>
#include <string.h>
using namespace std;

int main(){
	int n;
	char c[9],h[9],l[9];
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%s",c);
		strcpy(h,c);
		strcpy(l,c);
		sort(h,h+8,greater<char>());
		sort(l,l+8);
		int ans = atoi(h) - atoi(l);
		printf("%d\n",ans);
	}
	return 0;
}