#include <stdio.h>

#define MYSCAN scanf

int main(void){
	int n, p, d1, d2, king, record;

	while (true){
		king = -1;
		record = -1;

		MYSCAN("%d", &n);
		if (n == 0){ break; }
		for (int i = 0; i < n; i++){
			MYSCAN("%d%d%d", &p, &d1, &d2);
			if (record < d1 + d2){
				record = d1 + d2;
				king = p;
			}
		}
		printf("%d %d\n", king, record);
	}	
	return 0;
}