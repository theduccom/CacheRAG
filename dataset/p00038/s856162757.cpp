#include <cstdio>
#include <algorithm>
using namespace std;

bool straight(int* a){
	for(int i = 0; i < 4; i++){
		if(a[i + 1] - a[i] != 1) break;
		if(i + 1 == 4) return true;
	}
	
	return (a[0] == 1 && a[1] == 10 && a[2] == 11 && a[3] == 12 && a[4] == 13);
}

int main(){
	int card[5];
	
	while((scanf("%d,%d,%d,%d,%d", &card[0], &card[1], &card[2], &card[3], &card[4])) != EOF){
		sort(card, card + 5);
		
		//four card
		if(card[2] == card[1] && card[2] == card[3] && (card[2] == card[0] || card[2] == card[4])){
			printf("four card\n");
		}
		//full house
		else if(card[0] == card[1] && card[3] == card[4] && (card[2] == card[1] || card[2] == card[3])){
			printf("full house\n");
		}
		//straight
		else if(straight(card)){
			printf("straight\n");
		}
		//three card
		else if((card[0] == card[1] && card[1] == card[2]) || (card[1] == card[2] && card[2] == card[3]) || (card[2] == card[3] && card[3] == card[4])){
			printf("three card\n");
		}
		//two pair
		else if((card[0] == card[1] && (card[2] == card[3] || card[3] == card[4])) || (card[1] == card[2] && card[3] == card[4])){
			printf("two pair\n");
		}
		//one pair
		else if(card[0] == card[1] || card[1] == card[2] || card[2] == card[3] || card[3] == card[4]){
			printf("one pair\n");
		}
		//null
		else{
			printf("null\n");
		}
	}
	
	return 0;
}