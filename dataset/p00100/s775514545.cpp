#include<cstdio>
#include<map>
#include<vector>
std::vector<std::pair<int, long long>> pq;
int main() {
	int n, i, e;
	long long p, q;
	bool match;
	while (true) {
		scanf("%d", &n);
		if (n == 0)break;
		for (i = 0; i < n; i++) {
			scanf("%d%lld%lld", &e, &p, &q);
			match = false;
			for (auto itr = pq.begin(); itr != pq.end(); itr++) {
				if (itr->first == e) {
					itr->second += p*q;
					match = true;
					break;
				}
			}
			if (!match)pq.push_back(std::make_pair(e, p*q));
		}
		match = false;
		for (auto itr = pq.begin(); itr != pq.end(); itr++) {
			if (itr->second >= 1000000) {
				printf("%d\n", itr->first);
				match = true;
			}
		}
		if (!match)printf("NA\n");
		pq.clear();
	}
	return 0;
}
