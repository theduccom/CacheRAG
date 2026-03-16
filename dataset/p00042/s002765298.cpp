#include <iostream>
#include <algorithm>

using namespace std;

int main( void )
{
	int map[1001], save[1001];
	int w; long long count;
	count = 1;
	while(cin >> w, w) {
		++w;
		for(int i=0; i < w; ++i) map[i] = save[i] = 0;
		int n, value, weight;
		cin >> n;
		scanf("%d,%d", &value, &weight);
		save[weight] = map[weight] = max(save[weight], value);
		for(int i=1; i < n; ++i) {
			scanf("%d,%d", &value, &weight);
			save[weight] = max(save[weight], value);
			for(int j=0; j < w; ++j) {
				if(map[j]) {
					int ww = j + weight;
					if(ww < w)
						save[ww] = max(save[ww], map[j] + value);
					save[j] = max(save[j], map[j]);
				}
			}
			for(int j=0; j < w; ++j) {
				map[j] = save[j]; save[j] = 0;
			}
		}
		int Max = 0, idx;
		for(int i=1; i < w; ++i) {
			if(Max < map[i]) {
				Max = map[i];
				idx = i;
			}
		}
		cout << "Case " << count++ << ':' << endl;
		cout << Max << endl;
		cout << idx << endl;
	}

	return 0;
}