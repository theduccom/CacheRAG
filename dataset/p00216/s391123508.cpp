#include <stdio.h>

int main()
{
	int last = 4280,now;
	int cost;

	scanf("%d",&now);

	while(now >= 0){
		cost = 1150;
		
		while(30 < now){
			cost += 160;
			now--;
		}
		while(20 < now){
			cost += 140;
			now--;
		}
		while(10 < now){
			cost += 125;
			now--;
		}

		printf("%d\n",last-cost);

		scanf("%d",&now);
	}


	return 0;
}