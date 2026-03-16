#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int base=0;
int score = 0;
int out=0;

void addRunner(){
	switch (base){
	case 0:base = 1; break;
	case 1:base = 11; break;
	case 10:base = 101; break;
	case 11:base = 111; break;
	case 100:base = 1; score++; break;
	case 101:base = 11; score++; break;
	case 111:base = 111; score++; break;
	default:printf("any error"); break;
	}
}

int main(){
	int cining=0,ining;
	char eventName[9];

	cin >> ining;

	while(1){
		cin >> eventName;
		if (strcmp("HIT", eventName) == 0){
			addRunner();
		}
		else if (strcmp("OUT",eventName) == 0){
			out++;
			if (out == 3){
				printf("%d\n", score);
				score = out = base = 0;
				cining++;
				if (cining == ining)break;
			}
		}
		else if (strcmp("HOMERUN", eventName) == 0){
			switch (base){
			case 0:score++; break;
			case 1:score += 2; break;
			case 10:score += 2; break;
			case 11:score += 3; break;
			case 100:score += 2; break;
			case 101:score += 3; break;
			case 110:score += 3; break;
			case 111:score += 4; break;
			default:printf("any error"); break;
			}
			base = 0;
		}
	}

	return 0;
}