#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	int max, min, box[8];
	int i, j;
	
	while (scanf("%d", &n) != EOF){
		for (i = 0; i < n; i++){
			scanf("%d", &max);
			for (j = 0; j < 8; j++){
				box[j] = max % 10;
				max /= 10;
			}
			
			sort(box, box + 8);
			
			max = min = 0;
			for (j = 0; j < 8; j++){
				min *= 10;
				max *= 10;
				min += box[j];
				max += box[7 - j];
			}
			
			printf("%d\n", max - min);
		}
	}
	return (0);
}