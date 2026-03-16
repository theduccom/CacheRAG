#include <iostream>
#include <algorithm>

using namespace std;

int main( void )
{
	int map[1001];
	int w; long long count;
	count = 0;
	while(cin >> w, w) {
		++w;
		for(int i=0; i < w; ++i) map[i] = 0;
		int n, value, weight;
		cin >> n;
		scanf("%d,%d", &value, &weight);
		map[weight] = value;
		for(int i=1; i < n; ++i) {
			scanf("%d,%d", &value, &weight);
			for(int j=w-1; j > 0; --j) {
				if(map[j]) {
					int ww = j + weight;
					if(w > ww) {
						map[ww] = max(map[ww], map[j] + value);
					}
				}
			}
			map[weight] = max(map[weight], value);
		}
		int Max = 0, idx;
		for(int i=1; i < w; ++i) {
			if(Max < map[i]) {
				Max = map[i];
				idx = i;
			}
		}
		cout << "Case " << ++count << ':' << endl;
		cout << Max << endl;
		cout << idx << endl;
	}

	return 0;
}