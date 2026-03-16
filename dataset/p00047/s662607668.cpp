#include <stdio.h>

int main(){
	int ans = 0;
	char cup1,cup2;
	while(scanf("%c,%c",&cup1,&cup2) != EOF){
		if(cup1 == 'A' && cup2 == 'B'){
			if(ans == 0){
				ans = 1;
			}else if(ans == 1){
				ans = 0;
			}
		}if(cup1 == 'B' && cup2 == 'A'){
			if(ans == 0){
				ans = 1;
			}else if(ans == 1){
				ans = 0;
			}
		}if(cup1 == 'C' && cup2 == 'B'){
			if(ans == 2){
				ans = 1;
			}else if(ans == 1){
				ans = 2;
			}
		}if(cup1 == 'B' && cup2 == 'C'){
			if(ans == 2){
				ans = 1;
			}else if(ans == 1){
				ans = 2;
			}
		}if(cup1 == 'A' && cup2 == 'C'){
			if(ans == 0){
				ans = 2;
			}else if(ans == 2){
				ans = 0;
			}
		}if(cup1 == 'C' && cup2 == 'A'){
			if(ans == 0){
				ans = 2;
			}else if(ans == 2){
				ans = 0;
			}
		}
	}
	printf("%c\n",ans + 'A');
	return 0;
}