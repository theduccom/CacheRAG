#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
const ll LIMIT = 100000000L;
bool my_greater (int a, int b){return a>b;}
int main (int argc, char *argv[]) {
	int N, get;
	cin >> N;
	for(int z = 0; z < N; ++z) {
		cin >> get;
		vector<int> inc(8), dec(8);
		dec[0] = inc[0] = get % 10;
		for(int i = 1; i < 8; ++i) {
			int sum = 1;
			for(int j = 0; j < i; ++j) sum *= 10;
			inc[i] = dec[i] = get % (sum * 10) / sum;
		}
		sort(inc.begin(), inc.end());
		sort(dec.begin(), dec.end(), my_greater);
		ll isum = 0, dsum = 0, times = 1;
		for(int i = 0; i < 8; ++i) {
			isum += inc[i] * times;
			dsum += dec[i] * times;
			times *= 10;
		}
		cout << isum - dsum << endl;
	}
	return 0;
}