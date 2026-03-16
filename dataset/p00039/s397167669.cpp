#include <string.h>
#include <cmath>
#include <stdio.h>

char c[200];

int main(){
	int ans;
	int n;
	while(scanf("%s",&c) != EOF){
		n = strlen(c);
		ans = 0;
		for(int i = 0; i < n; i++){
			if(c[i] == 'I'){
				if(c[i + 1] == 'V' || c[i + 1] == 'X' || c[i + 1] == 'L' || c[i + 1] == 'C' || c[i + 1] == 'D' || c[i + 1] == 'M'){
					ans -= 1;
				}else{
					ans += 1;
				}
			}
			if(c[i] == 'V'){
				if(c[i + 1] == 'X' || c[i + 1] == 'L' || c[i + 1] == 'C' || c[i + 1] == 'D' || c[i + 1] == 'M'){
					ans -= 5;
				}else{
					ans += 5;
				}
			}
			if(c[i] == 'X'){
				if(c[i + 1] == 'L' || c[i + 1] == 'C' || c[i + 1] == 'D' || c[i + 1] == 'M'){
					ans -= 10;
				}else{
					ans += 10;
				}
			}
			if(c[i] == 'L'){
				if(c[i + 1] == 'C' || c[i + 1] == 'D' || c[i + 1] == 'M'){
					ans -= 50;
				}else{
					ans += 50;
				}
			}
			if(c[i] == 'C'){
				if(c[i + 1] == 'D' || c[i + 1] == 'M'){
					ans -= 100;
				}else{
					ans += 100;
				}
			}
			if(c[i] == 'D'){
				if(c[i + 1] == 'M'){
					ans -= 500;
				}else{
					ans += 500;
				}
			}
			if(c[i] == 'M'){
				ans += 1000;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}