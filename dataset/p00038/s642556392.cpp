#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int hand[5];
	int card[13];
	int m;
	while(scanf("%d,%d,%d,%d,%d", &hand[0], &hand[1], &hand[2], &hand[3], &hand[4]) != EOF){
		m = -99999;
		for(int i = 0; i < 13; i++){
			card[i] = 0;
		}
		for(int i = 0; i < 5; i++){
			card[hand[i]]++;
		}
		sort(hand, hand+5);
		for(int i = 0; i < 13; i++){
			m = max(m, card[i]);
		}
		if(m == 4){
			printf("four card\n");
		}else if(m == 3){
			if((hand[0] == hand[1] && hand[0] == hand[2] && hand[3] == hand[4])
				||(hand[0] == hand[1] && hand[2] == hand[3] && hand[2] == hand[4])){
				printf("full house\n");
			}else {
				printf("three card\n");
			}
		}else if(m == 2){
			if(hand[0] == hand[1] && (hand[2] == hand[3] || hand[3] == hand[4])
					|| hand[1] == hand[2] && hand[3] == hand[4]){
				printf("two pair\n");
			}else if(hand[0] == hand[1] || hand[1] == hand[2] || hand[2] == hand[3] || hand[4]){
				printf("one pair\n");
			}
		}else if(hand[0]+1 == hand[1] && hand[1]+1 == hand[2] && hand[2]+1 == hand[3] && hand[3]+1 == hand[4]
				|| hand[0] == 1 && hand[1] == 10 && hand[2] == 11 && hand[3] == 12 && hand[4] == 13){
			printf("straight\n");
		}else{
			printf("null\n");
		}
	}
	return 0;
}