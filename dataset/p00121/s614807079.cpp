#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <map>
#include <string>
using namespace std;

const int INF = 1e+9;
typedef pair<vector<int>, int> P;

int d[] = {-1, 1, 4, -4};

int main() {
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
	vector<int> init{0, 1, 2, 3, 4, 5, 6, 7};
	map<vector<int>, int> visited;
	
	queue<P> que;	
	que.push(P(init, 0));
	while(!que.empty()){
		P p = que.front();
		que.pop();
		vector<int> v = p.first;
		if(visited[v])
			continue;
		visited[v] = p.second;
		int zero;
		for(int i = 0; i < 8; ++i){
			if(v[i] == 0){
				zero = i;
				break;
			}
		}
		for(int i = 0; i < 4; ++i){
			if(zero == 3 && i == 1)
				continue;
			if(zero == 4 && i == 0)
				continue;
			int next = zero + d[i];
			if(next >= 0 && next < 8){
				int tmp = v[next];
				v[next] = v[zero];
				v[zero] = tmp;
				que.push(P(v, p.second + 1));
				tmp = v[next];
				v[next] = v[zero];
				v[zero] = tmp;
			}
		}
	}
	vector<int> vec;
	vec.resize(8);
	while(cin >> vec[0]){
		for(int i = 1; i < 8; ++i){
			cin >> vec[i];
		}
		if(vec == init)
			cout << "0" << endl;
		else{
			cout << visited[vec] << endl;
		}
	}
	return 0;
}