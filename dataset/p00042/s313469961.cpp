#include <iostream>
#include <algorithm>
using namespace std;

int w, z[1100][2] = {}, map[1100][1100] = {}, n, min_w = 20000000, max_v = 0;



int main(){
	int k = 1;
	while(cin >> w >> n){
		if (w == 0) break;
		min_w = 20000000;
		max_v = -1;
		for(int i = 1;i<=n;i++){
			char cmp;
			cin >> z[i][0] >> cmp >> z[i][1];
		}
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=w;j++){
				if (z[i][1] > j) {
					map[i][j] = map[i - 1][j];
					continue;
				}
				map[i][j] = max(map[i - 1][j], map[i - 1][j - z[i][1]] + z[i][0]);
			}
		}
		for(int i = w;i>0;i--){
			if (max_v <= map[n][i]) {
				max_v = map[n][i];
				min_w = i;
			}
		}
		cout << "Case " << k << ":" << endl
			<< max_v << endl
			<< min_w << endl;
		k++;
	}
	return 0;
}