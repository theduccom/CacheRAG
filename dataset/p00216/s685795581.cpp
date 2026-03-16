#include <cstdio>

int Solve(int w){
	int c = 1150;
	if(w > 30){
		c += (w - 30) * 160;
		c += 140 * 10;
		c += 125 * 10;
	}else if(w > 20){
		c += 140 * (w - 20);
		c += 125 * 10;
	}else if(w > 10){
		c += 125 * (w - 10);
	}
	return c;
}

int main(){
	int self;
	//int bf;
	while(1){
	
		scanf("%d",&self);
		if(self == -1){break;}
		printf("%d\n",4280 - Solve(self));
	}
	return 0;
}