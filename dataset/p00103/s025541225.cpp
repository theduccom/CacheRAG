#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int inning;
	int i, out = 0, hit = 0;
	int score = 0;
	char event[8];
	
	scanf("%d", &inning);
	
	while(inning != 0){
		scanf("%s", event);
		if(!strcmp(event, "HOMERUN")){
			score += hit + 1;
			hit = 0;
		}else if(!strcmp(event, "HIT")){
			hit++;
			if(hit == 4){
				score++;
				hit--;
			}
		}else if(!strcmp(event, "OUT")){
			out++;
		}
 		if(out == 3){
			inning--;
			out = 0;
			hit = 0;
			cout << score << endl;
			score = 0;
		}
	}
	
	return 0;
}