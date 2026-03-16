#include <stdio.h>
#include <algorithm>

using namespace std;



int main(){
	int a,b,c,d,e,table[14],pair,three,four;
	bool st_FLG;

	while(scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e) != EOF){
		for(int i=1;i <= 13;i++)table[i] = 0;
		pair = three = four = 0;
		st_FLG=false;
		table[a]++;
		table[b]++;
		table[c]++;
		table[d]++;
		table[e]++;

		for(int i=1;i<=13;i++){
			if(table[i] == 2)pair++;
			else if(table[i] == 3)three++;
			else if(table[i] == 4)four++;
			if(i >= 5 && table[i] == 1 && table[i-1] == 1 && table[i-2] == 1 && table[i-3] == 1 && table[i-4]== 1)
				st_FLG = true;
		}

		if(four == 1){
			printf("four card\n");
		}else if(pair == 1 && three == 1){
			printf("full house\n");
		}else if(three == 1){
			printf("three card\n");
		}else if(pair == 2){
			printf("two pair\n");
		}else if(pair == 1){
			printf("one pair\n");
		}else if((st_FLG == true) || (table[10] == 1 && table[11] == 1 && table[12] == 1 && table[13] == 1 && table[1] == 1)){
			printf("straight\n");
		}else{
			printf("null\n");
		}
	}
	return 0;
}