#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<char, int>P;

int func(float n) {
	float f = (float)((int)n);
	if (n - f < 0.5)return (int)f;
	return (int)f + 1;
}
int main() {
	float sum = 0, cnt = 0;
	float i, j;
	float C = 0;
	while (scanf("%f,%f", &i, &j) != EOF) {
		sum += i*j; cnt += j;
		C++;
	}
	cout << sum << endl << func(cnt / C) << endl;
	return 0;
}