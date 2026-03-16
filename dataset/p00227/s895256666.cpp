#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main(void)
{
	int n, m;
	
	while (scanf("%d %d", &n, &m)){
		if (n == 0 && m == 0) break;
		
		vector <int> v;
		int tmp;
		for (int i = 0; i < n; i++){
			scanf("%d", &tmp);
			v.push_back(tmp);
		}
		sort(v.begin(), v.end(), greater<int>());
		
		int res = 0;
		int sum = 0;
		for (int i = 0; i < n; i++){
			if ((i + 1) % m == 0) {
				sum += v[i];
			}
			res += v[i];
		}
		
		printf("%d\n", res - sum);
	}
	
	return (0);
}