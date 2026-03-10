#include <cstdio>
#include <vector>

using namespace std;

#define FOR(it,c) for(typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)

int main() {
	vector<int> v;
	for(int i = 1; i <= 9; i++) {
		v.push_back(i);
	}
	
	FOR(it1, v) {
		FOR(it2, v) {
			printf("%dx%d=%d\n", *it1, *it2, *it1 * *it2);
		}
	}
}