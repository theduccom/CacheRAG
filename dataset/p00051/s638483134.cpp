#include <algorithm>
#include <string.h>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(){
	int n;
	char c[10];
	int ans;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		ans = 0;
		scanf("%s",c);
		sort(c,c+8);
		for(int j = 0; j < 8; j++){
			ans += (c[j] - c[7-j]) * pow((double)10,(int)j);
		}
		printf("%d\n",ans);
	}
	return 0;
}