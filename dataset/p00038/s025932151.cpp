#include <cstdio>
#include <algorithm>

using namespace std;

int one_pair(int hand[])
{
	int i, j;
	
	for (i = 0; i < 5 - 1; i++){
		for (j = i + 1; j < 5; j++){
			if (hand[i] == hand[j]){
				return (1);
			}
		}
	}
	
	return (0);
}

int two_pair(int hand[])
{
	int i, j, k, pair[2];
	
	for (k = 0; k < 2; k++){
		for (i = 0; i < 5 - 1; i++){
			for (j = i + 1; j < 5; j++){
				if (hand[i] == hand[j] && i != pair[0] && i != pair[1] && j != pair[0] && j != pair[1]){
					pair[0] = i;
					pair[1] = j;
					
					if (k == 1){
						return (1);
					}
				}
			}
		}
	}
	
	return (0);
}

int three_card(int hand[]){
	int i, j, k;
	
	for (i = 0; i < 5 - 2; i++){
		for (j = i + 1; j < 5 - 1; j++){
			for (k = j + 1; k < 5; k++){
				if (hand[i] == hand[j] && hand[j] == hand[k]){
					return (1);
				}
			}
		}
	}
	
	return (0);
}

int straight(int hand[]){
	int i, j, hand1[5], hand2[5];
	
	for (i = 0; i < 5; i++){
		hand1[i] = hand[i];
	}
	
	for (i = 0; i < 5; i++){
		hand2[i] = hand[i];
		if (hand2[i] == 1){
			hand2[i] = 14;
		}
	}
	
	sort(hand1, hand1 + 5);
	sort(hand2, hand2 + 5);
	
	for (i = 0; i < 5 - 1; i++){
		if (hand1[i] != hand1[i + 1] - 1){
			break;
		}
	}
	
	if (i == 5 - 1){
		return (1);
	}
	
	for (i = 0; i < 5 - 1; i++){
		if (hand2[i] != hand2[i + 1] - 1){
			break;
		}
	}
	
	if (i == 5 - 1){
		return (1);
	}
	
	return (0);
}

int full_house(int hand[])
{
	int i, j, k, l, m, hand1[5];
	
	for (i = 0; i < 5; i++){
		hand1[i] = hand[i];
	}
	
	for (i = 0; i < 5 - 2; i++){
		for (j = i + 1; j < 5 - 1; j++){
			for (k = j + 1; k < 5; k++){
				if (hand1[i] == hand1[j] && hand1[j] == hand1[k]){
					hand1[i] = -1;
					hand1[j] = -2;
					hand1[k] = -3;
					for (l = 0; l < 5 - 1; l++){
						for (m = l + 1; m < 5; m++){
							if (hand1[l] == hand1[m]){
								return (1);
							}
						}
					}
				}
			}
		}
	}
	
	return (0);
}

int four_card(int hand[]){
	int i, j, k, l;
	
	for (i = 0; i < 5 - 3; i++){
		for (j = i + 1; j < 5 - 2; j++){
			for (k = j + 1; k < 5 - 1; k++){
				for (l = k + 1; l < 5; l++){
					if (hand[i] == hand[j] && hand[j] == hand[k] && hand[k] == hand[l]){
						return (1);
					}
				}
			}
		}
	}
	
	return (0);
}

void poker_hand(int hand[]){
	if (four_card(hand)) puts("four card");
	else if (full_house(hand)) puts("full house");
	else if (straight(hand)) puts("straight");
	else if (three_card(hand)) puts("three card");
	else if (two_pair(hand)) puts("two pair");
	else if (one_pair(hand)) puts("one pair");
	else puts("null");
}

int main()
{
	int hand[5];
	
	while (scanf("%d,%d,%d,%d,%d", &hand[0], &hand[1], &hand[2], &hand[3], &hand[4]) != EOF){
		poker_hand(hand);
	}
	
	return (0);
}