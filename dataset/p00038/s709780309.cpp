#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int hand[6] = {};
	while (~scanf("%d", &hand[0])){
		for (int i = 1; i < 5; i++){
			scanf(",%d", &hand[i]);
		}

		int cnt = 0, flag = true, card[13] = {}, max = 4;
		sort(hand, hand + 5);
		/*for (int i = 0; i < 5; i++){
			printf("%d ", hand[i]);
		}
		puts("");*/
		for (int i = 0; i < 4; i++){
			for (int j = i + 1; j < 5; j++){
				if (hand[i] == hand[j]){
					cnt++;
				}
			}
		}
		//printf("%d\n", cnt);
		int i = 0;
		if (hand[i] == 1 && hand[i + 1] == 10){
			//printf("!!!!!!!\n");
			i = 1;
			max = 5;
			hand[5] = 14;
		}
		for (; i < max; i++){
			if (hand[i] + 1 != hand[i + 1]){
				flag = false;
			}
		}
		if (cnt == 6){
			printf("four card\n");
		}
		else if (cnt == 4){
			printf("full house\n");
		}
		else if (flag){
			printf("straight\n");
		}
		else if (cnt == 3){
			printf("three card\n");
		}
		else if (cnt == 2){
			printf("two pair\n");
		}
		else if (cnt == 1){
			printf("one pair\n");
		}
		else{
			printf("null\n");
		}
	}
	return 0;
}