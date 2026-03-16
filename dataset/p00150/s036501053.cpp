#include <iostream>
#include <algorithm>
using namespace std;

bool data[10010];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	while(cin >> n && n != 0){
		fill(data, data + n + 1, true);

		data[1] = false;
		data[0] = false;
		for(int i = 2; i <= n; ++i){
			for(int j = 2; i * j <= n; ++j){
				data[i * j] = false;
			}
		}

		for(int i = n; i >= 2; --i){
			if(data[i] && data[i - 2]){
				cout << i - 2 << " " << i << endl;
				break;
			}
		}
	}

	return 0;
}