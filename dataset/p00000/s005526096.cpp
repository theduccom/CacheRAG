// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			cout << i << "x" << j << "=" << i * j << "\n";
		}
	}
	return 0;
}
// Write Here

