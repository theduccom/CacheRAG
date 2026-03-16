#include <algorithm>
#include <stdio.h>
#include <iostream>
using namespace std;

#define ONE 1
#define TWO 2
#define THREE 3
#define STO 4
#define FULL 5
#define FOUR 6

int main(void){
	int a[5];
	int hand;
	int cnt[3];
	int num;
	int temp;
	int i;

	while(scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4]) != EOF){
		hand = 0;
		num = 0;
		cnt[0] = 1;
		cnt[1] = 1;
		cnt[2] = 1;
		sort(a, a+5);
		temp = a[0];
		for(i=1; i<5; i++){
			if(temp == a[i]){
			   	cnt[num]++;
			}else{
				temp = a[i];
				if(cnt[num] == 1){
					cnt[num] = 1;
				}else{
					num++;
				}
			}
		}
		if(cnt[0] == 4 || cnt[1] == 4 || cnt[2] == 4){
			hand = FOUR;
			puts("four card");
		}else if(cnt[0] + cnt[1] + cnt[2] == 6){
			hand = FULL;
			puts("full house");
		}else if((a[0]+1 == a[1] && a[1]+1 == a[2] && a[2]+1 == a[3] && a[3]+1 == a[4]) ||
			   	(a[0] == 1 && a[1] == 10 && a[2] == 11 && a[3] == 12 && a[4] == 13)){
			hand = STO;
			puts("straight");
		}
		else if(cnt[0] == 3 || cnt[1] == 3 || cnt[2] == 3){
			hand = THREE;	//two pair
			puts("three card");
		}else if(cnt[0] + cnt[1] + cnt[2] == 5){
			hand = TWO;	//three pair
			puts("two pair");
		}else if(cnt[0] == 2 || cnt[1] == 2 || cnt[2] == 2){
			hand = ONE;
			puts("one pair");
		}else{
			puts("null");
		}
	}

	return 0;
}