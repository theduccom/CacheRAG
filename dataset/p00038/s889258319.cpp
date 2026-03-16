#include<cstdio>

using namespace std;

void bubble_ask(int x[]);

int card[5];
int main(void){
	int i,cnt=0,st=0,pair=0;

	while(scanf("%d,%d,%d,%d,%d",&card[0],&card[1],&card[2],&card[3],&card[4])!=EOF){
		//昇順にソート
		bubble_ask(card);
		
		for(i=0;i<4;i++){
			if(card[i]+1==card[i+1])	st++;
			if(card[i]==1 && card[4]==13 && card[1]!=2)	st++;
			if(i!=3){
				if(card[i]==card[i+1] && card[i+1]==card[i+2] && cnt!=4)	cnt=3;
			}
			if(i!=3 && i!=2){
				if(card[i]==card[i+1] && card[i+1]==card[i+2] && card[i+2]==card[i+3])	cnt=4;
			}
			if(card[i]==card[i+1]) pair++;
		}

		//four card
		if(cnt==4)	printf("four card\n");
		//full house
		else if(cnt==3 && pair==3)	printf("full house\n");
		//straight
		else if(st==4)	printf("straight\n");
		//three card
		else if(cnt==3)	printf("three card\n");
		//two pair
		else if(pair==2)	printf("two pair\n");
		//one pair
		else if(pair==1)	printf("one pair\n");
		//null
		else	printf("null\n");

		cnt=st=pair=0;
	}

	return 0;
}

void bubble_ask(int card[]){
	int i,j,data;
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(card[i] > card[j]){
				data=card[i];
				card[i]=card[j];
				card[j]=data;
			}
		}
	}
}