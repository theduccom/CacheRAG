#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 10

int n, k, ice[MAX];

int main() {
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			return 0;

		for(int i = 0; i < MAX; i++)
			ice[i] = 0;

		while(n-- > 0) {
			scanf("%d", &k);
			ice[k]++;
		}

		for(int i = 0; i < MAX; i++) {
			if(ice[i] > 0)
				while(ice[i]-- > 0)
					printf("*");
			else
				printf("-");
			puts("");
		}
	}
}