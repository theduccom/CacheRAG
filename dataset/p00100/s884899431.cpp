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

using namespace std;

int main(void){
	int N;
	int id;
	ll p,q;
	while(cin >> N){
		queue<int> que;
		map<int, ll> map;
		int check = 0;
		if(!N) break;
		for(int i=0; i<N; ++i){
			cin >> id >> p >> q;
			if(map.find(id) == map.end()){
				map[id] = p*q;
				que.push(id);
			} else {
				map[id] += p*q;
			}
		}
		while(que.size()){
			if(map[que.front()] >= 1000000){
				cout << que.front() << endl;
				check = 1;
			}
			que.pop();
		}
		if(check == 0) cout << "NA" << endl;
	}

	return 0;
}