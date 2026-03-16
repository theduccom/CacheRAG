#include <cstdio>
#include <bitset>
using namespace std;


#define MAX 1000001
bitset<MAX> bs;
int n;
long int s[10001] = { 0 };

int main(){
	int it = 1;
	for (int i = 2; i < MAX; i++) {
		if (!bs[i]) {
			for (int j = i + i; j < MAX; j += i) {
				bs.set(j);
			}
			s[it] = s[it - 1] + i;
			it++;
			if (it > 10000) break;
		}
	}
	while (scanf("%d", &n), n != 0) {
		printf("%d\n", s[n]);
	}

	return 0;
}