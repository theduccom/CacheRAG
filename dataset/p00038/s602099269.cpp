#include<bits/stdc++.h>
#define EPS (1e-10)
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int a[5];
	while (~scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4])) {
		sort(a, a + 5);
		if ((a[0] == a[1] && a[0] == a[2] && a[0] == a[3]) || (a[1] == a[2] && a[1] == a[3] && a[1] == a[4]))puts("four card");
		else if ((a[0] == a[1] && a[0] == a[2] && a[3] == a[4]) || (a[0] == a[1] && a[2] == a[3] && a[2] == a[4]))puts("full house");
		else if ((a[1] == a[0] + 1 && a[2] == a[1] + 1 && a[3] == a[2] + 1 && a[4] == a[3] + 1) || (a[0] == 1 && a[1] == 10 && a[2] == 11 && a[3] == 12 && a[4] == 13))puts("straight");
		else if ((a[0] == a[1] && a[0] == a[2]) || (a[1] == a[2] && a[1] == a[3]) || (a[2] == a[3] && a[2] == a[4]))puts("three card");
		else if ((a[0] == a[1] && a[2] == a[3]) || (a[0] == a[1] && a[3] == a[4]) || (a[1] == a[2] && a[3] == a[4]))puts("two pair");
		else if (a[0] == a[1] || a[1] == a[2] || a[2] == a[3] || a[3] == a[4])puts("one pair");
		else puts("null");
	}
	return 0;
}