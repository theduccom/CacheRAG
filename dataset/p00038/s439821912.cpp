#include <stdio.h>

char roll[8][11] = {"null","null","one pair","two pair","three card","straight","full house","four card"};

int main(){
	int ans;
	int emp;
	int a[5];
	int hand[15];
	while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4]) != EOF){
		for(int i = 0; i < 15; i++){
			hand[i] = 0;
		}
		for(int i = 0; i < 5; i++){
			hand[a[i]]++;
		}
		emp = 0;
		for(int i = 0; i < 14; i++){
			if(hand[i]){
				emp++;
			}
		}
		hand[14] = hand[1];
		ans = 1;
		if(emp == 4){
			ans = 2;
		}
		if(emp == 3){
			ans = 3;
		}
		for(int i = 1; i < 14; i++){
			if(hand[i] == 3){
				ans = 4;
			}
		}
		for(int i = 1; i < 11; i++){
			if(hand[i] == 1 && hand[i + 1] == 1 && hand[i + 2] == 1 && hand[i + 3] == 1 && hand[i + 4] == 1){
				ans = 5;
			}
		}
		if(emp == 2){
			ans = 6;
		}
		for(int i = 1; i < 14; i++){
			if(hand[i] >= 4){
				ans = 7;
			}
		}
		printf("%s\n",roll[ans]);
	}
	return 0;
}