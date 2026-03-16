#include <cstdio>

using namespace std;

int main()
{
	int hand;
	
	while (scanf("%d", &hand) != EOF){
		int card[15] = {0};
		card[hand]++;
	
		for (int i = 0; i < 4; i++){
			scanf(",%d",&hand);
			card[hand]++;
		}
		
		int cnt = 0;
		int cast = 1;
	
		if (card[10] == 1 && card[11] == 1 &&card[12] == 1 &&card[13] == 1 &&card[1] == 1){
			cast = 5;
		}
		else {
		for (int i = 1; i <= 14; i++){
			
			if (cnt == 5) cast = 5;
			
			if (card[i] == 1) cnt++;
			else cnt = 0;
		
			if (card[i] == 4) cast = 7;
		
			else if (card[i] == 3){
				for (int j = 1; j < 14; j++){
					if (card[j] == 2){
						cast = 6;
					}
				}
				if (cast == 6);
				else cast = 4;
			}
		
			else if (card[i] == 2){
				for (int j = 1; j < 14; j++){
					if (card[j] == 3){
						cast = 6;
					}
				}
				if (cast == 6);
				else if (cast == 2) cast = 3;
				else cast = 2;
			}
		}
		}
		if (cast == 7) printf("four card\n");
		else if (cast == 6) printf("full house\n");
		else if (cast == 5) printf("straight\n");
		else if (cast == 4) printf("three card\n");
		else if (cast == 3) printf("two pair\n");
		else if (cast == 2) printf("one pair\n");
		else if (cast == 1) printf("null\n");
	}
	
	return (0);
}