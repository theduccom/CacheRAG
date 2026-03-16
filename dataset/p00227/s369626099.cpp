#include <stdio.h>

#define MAX 20000
#define MYSCAN scanf

int main(void){
	int n, m;
	int p[2000];
	int i, j;
	int ans, tmp;

	while (true){
		MYSCAN("%d%d", &n, &m);
		if (n == 0 && m == 0){	break;	}

		ans = 0;

		// テ」ツ?セテ」ツ?堙」ツつステ」ツδシテ」ツδ暗」ツ?凖」ツつ?
		for (i = 0; i < n; i++){
			p[i] = 0;
			MYSCAN("%d", &p[i]);
			for (j = i - 1; j >= 0; j--){
				if (p[j] < p[j+1]){
					tmp = p[j];
					p[j] = p[j+1];
					p[j+1] = tmp;
				}
				else{
					break;
				}
			}
		}

		for (i = 0; i < n; i++){
			if ((i+1) % m != 0){
				ans += p[i];
			}
		}

		printf("%d\n", ans);


	}

	return 0;

}