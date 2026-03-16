#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <numeric>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;
typedef pair<P,P> P2;
const int INF = 1 << 30;
const double EPS = 1E-9;

int vege[1000];

bool comp(int a, int b){
	return a > b;
}

int main(){
	int n, m;
	while(cin >> n >> m && (n || m)){
		for(int i = 0; i < n; i++){
			cin >> vege[i];
		}
		sort(vege, vege + n, comp);
		int cost = 0;
		for(int i = 0; i < n; i++){
			if((i + 1) % m == 0) continue;
			cost += vege[i];
		}
		cout << cost << endl;
	}
	return 0;
}