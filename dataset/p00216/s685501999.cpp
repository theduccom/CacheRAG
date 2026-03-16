#include <stdio.h>

#define MYSCAN scanf

int main(void){
	int w = 0, ans = 0;
	int last = 4280;
	int base = 1150;

	while (true){

		MYSCAN("%d", &w);
		if (w == -1){ break; }
		if (w > 30){
			ans = (w - 30) * 160;
			ans += 140 * 10 + 125 * 10 + base;
		}else if (w > 20){
			ans = (w - 20) * 140;
			ans += 125 * 10 + base;
		}else if (w > 10){
			ans = (w - 10) * 125;
			ans += base;
		}
		else{
			ans = base;
		}
		printf("%d\n", last - ans);

	}	
	return 0;
}