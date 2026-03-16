#include <cstdio>

int w, money;

int main(){
	while(scanf("%d", &w)){
		if(w == -1) break;
		money = 4280-1150;
		if(w > 30) money -= 10*125+10*140+(w-30)*160;
		else if(w > 20) money -= 10*125+(w-20)*140;
		else if(w > 10) money -= (w-10)*125;
		printf("%d\n", money);
	}
}