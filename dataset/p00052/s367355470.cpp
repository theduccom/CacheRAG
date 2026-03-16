#include <stdio.h>

int main(){
	int n;
	int ans;
	scanf("%d",&n);
	while(n != 0){
		ans = 0;
		for(int i = 1; i <= n; i++){
			if(i % 15625 == 0){
				ans += 6;
			}else if(i % 3125 == 0){
				ans += 5;
			}else if(i % 625 == 0){
				ans += 4;
			}else if(i % 125 == 0){
				ans += 3;
			}else if(i % 25 == 0){
				ans += 2;
			}else if(i % 5 == 0){
				ans += 1;
			}
		}

		printf("%d\n",ans);
		scanf("%d",&n);
	}
	return 0;
}