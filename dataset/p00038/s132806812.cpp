#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int hand[5];
	int i, j;
	
	while (scanf("%d", hand) != EOF){
		int straight = 1;
		int pair = 0;
		int three = 0;
		int four = 0;
		
		for (i = 1; i < 5; i++){
			scanf("%*c%d", hand + i);
		}
		sort(hand, hand + 5);
		for (i = 0; i < 4; i++){
			if (hand[i] == hand[i + 1]){
				pair++;
			}
		}
		for (i = 0; i < 3; i++){
			if (hand[i] == hand[i + 1] && hand[i] == hand[i + 2]){
				three = 1;
				pair -= 2;
			}
		}
		for (i = 0; i < 2; i++){
			if (hand[i] == hand[i + 1] && hand[i] == hand[i + 2] && hand[i] == hand[i + 3]){
				four = 1;
			}
		}
		for (i = 0; i < 4; i++){
			if (hand[i] != hand[i + 1] - 1){
				straight = 0;
				break;
			}
		}
		if (hand[1] == 10 && hand[2] == 11 && hand[3] == 12 && hand[4] == 13 && hand[0] == 1){
			straight = 1;
		}
		if (straight == 1){
			puts("straight");
		}
		else if (four == 1){
			puts("four card");
		}
		else if (pair > 0 && three == 1){
			puts("full house");
		}
		else if (three == 1){
			puts("three card");
		}
		else if (pair == 2){
			puts("two pair");
		}
		else if (pair == 1){
			puts("one pair");
		}
		else {
			puts("null");
		}
	}
	
	return 0;
}