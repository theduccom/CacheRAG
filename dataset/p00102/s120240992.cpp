#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <queue>
#include <complex>
#include <climits>

typedef long long ll;

int r[101][101] = {0};

using namespace std;

int main(void){
	int n;
	while(cin >> n){
		if(!n) break;
		for(int i=0; i<n; ++i){
			for(int j=0; j<n; ++j){
				cin >> r[i][j];
				r[i][n] += r[i][j];
				r[n][j] += r[i][j];
				r[n][n] += r[i][j];
			}
		}
		for(int i=0; i<=n; ++i){
			for(int j=0; j<=n; ++j){
				printf("%5d", r[i][j]);
				r[i][j] = 0;
			}
			cout << endl;
		}
	}


	return 0;
}