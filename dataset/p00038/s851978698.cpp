#include <stdio.h>

int main(void){
	int card[14] , buf[5] = {0} , i , flag , check_3 , cnt;
	while(scanf("%d,%d,%d,%d,%d" , &buf[0] , &buf[1] , &buf[2] , &buf[3] , &buf[4])!=EOF){
		for(i=1;i<14;i++){
			card[i] = 0;
		}
		for(i=0;i<5;i++){
			card[buf[i]]++;
		}
		flag = 0;
		check_3 = 0;
		cnt = 0;

		for(i=1;i<=13;i++){
			if(card[i] == 4){
				printf("four card\n");
				flag = 1;
			}
			if(card[i] == 3){
				check_3 = 1;
			}
		}
		if(flag) continue;

		if(check_3){
			for(i=1;i<=13;i++){
				if(card[i] == 2){
					printf("full house\n");
					flag = 1;
				}
			}
		}
		if(flag) continue;

		for(i=1;i<=9;i++){
			if(card[i]==1&&card[i+1]==1&&card[i+2]==1&&card[i+3]==1&&card[i+4]==1){
				printf("straight\n");
				flag = 1;
			}
		}
		if(flag) continue;
		if(card[10]==1&&card[11]==1&&card[12]==1&&card[13]==1&&card[1]==1){
			printf("straight\n");
			continue;
		}

		if(check_3){
			printf("three card\n");
			continue;
		}

		for(i=1;i<=13;i++){
			if(card[i] == 2) cnt++;
		}
		if(cnt == 2){
			printf("two pair\n");
			continue;
		}

		if(cnt == 1){
			printf("one pair\n");
			continue;
		}

		printf("null\n");
	}
	return 0;
}