#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int weight;
	int i;
	int a[8];
	int cu;
	int cnt = 0;

	while (scanf("%d", &weight) != EOF){
		for (i = 0; i < 8; i++) a[i] = 0;
		cnt = 0;
		cu = 512;
		i = 0;
		while (weight != 0){
			while (cu > weight) cu /= 2;
			a[i++] = cu;
			weight -= cu;
			cnt++;
		}
		sort(a, a + cnt);
		printf("%d", a[0]);
		for (i = 1; i < cnt; i++){
			printf(" %d", a[i]);
		}
		printf("\n");
	}

	return (0);
}