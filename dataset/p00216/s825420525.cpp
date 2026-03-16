#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 300000

int w;

int cost(int w) {
	return 1150 + min(max(w - 10, 0), 10) * 125 + min(max(w - 20, 0), 10) * 140
			+ max(w - 30, 0) * 160;
}

int main() {
	while (1) {
		scanf("%d", &w);
		if (w < 0)
			return 0;

		printf("%d\n", 4280 - cost(w));
	}
}