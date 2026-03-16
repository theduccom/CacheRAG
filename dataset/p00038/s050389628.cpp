#include <stdio.h>

#define RANKS 13
#define CARDS 5

int scanCards(int a[]){
	return scanf("%d,%d,%d,%d,%d",a, a+1, a+2, a+3, a+4);
}

int isStraight(int a[]){
	for (int i=0; i<=10; i++){
		int flg = 1;
		for (int j=0; j<5; j++){
			if (a[i+j] != 1){
				flg=0;
				break;
			}
		}
		if (flg) return 1;
	}
	return 0;
}


int main(void){
	int rank[CARDS];
	int count[RANKS+1]; // count[13] = count[0]
	int pair, trio, quod;
	
	while (scanCards(rank) != EOF){
		pair = trio = quod = 0;
		for (int i=0; i<RANKS; i++) count[i] = 0;
		for (int i=0; i<CARDS; i++) count[rank[i]-1]++;
		count[RANKS] = count[0];
		for (int i=0; i<RANKS; i++){
			if (count[i]==2) pair++;
			if (count[i]==3) trio++;
			if (count[i]==4) quod++;
		}
		
		if (quod==1) puts("four card");
		else if (pair==1 && trio==1) puts("full house");
		else if (isStraight(count)) puts("straight");
		else if (trio==1) puts("three card");
		else if (pair==2) puts("two pair");
		else if (pair==1) puts("one pair");
		else puts("null");
	}
	
	return 0;
}