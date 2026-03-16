#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<char, int>P;

float l[10], sum[11];
int main() {
	int v1, v2;
	while (scanf("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d,%d", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v1, &v2) != EOF) {
		float cnt = 0;
		rep(i, 10) {
			sum[i] = cnt;
			cnt += l[i];
		}
		sum[10] = cnt;
		cout << lower_bound(sum, sum + 11, (sum[10] / (v1 + v2))*v1) - sum << endl;
	}
	return 0;
}