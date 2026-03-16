#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 300000

int n, p, d1, d2;

int main() {
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			return 0;

		int mp = 0, md = -1;
		while(n-- > 0) {
			scanf("%d %d %d", &p, &d1, &d2);
			if(md < d1 + d2) {
				mp = p;
				md = d1 + d2;
			}
		}

		printf("%d %d\n", mp, md);
	}
}