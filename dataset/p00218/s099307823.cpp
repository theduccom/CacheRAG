#include <cstdio>

int main(void) {
	while(true) {
		int n;
		scanf("%d", &n);
		if(n == 0)
			break;
		for(int i = 0; i < n; i++) {
			int m, e, j;
			char level = 'C';
			scanf("%d%d%d", &m, &e, &j);
			if(m == 100 || e == 100 || j == 100)
				level = 'A';
			if((m + e) / 2 >= 90)
				level = 'A';
			if((m + e + j) / 3 >= 80)
				level = 'A';
			if((m + e + j) / 3 >= 70 && level == 'C')
				level = 'B';
			if((m + e + j) / 3 >= 50 && level == 'C' && (m >= 80 || e >= 80))
				level = 'B';
			printf("%c\n", level);
		}
	}
	return 0;
}