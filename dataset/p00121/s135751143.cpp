#include <bits/stdc++.h>
using namespace std;

const int d[] = {-1, -4, 1, 4};

typedef pair<string, int> P;

int main()
{
	queue<P> que;
	que.push({"01234567", 0});
	map<string, int> done;
	while (!que.empty()){
		P st = que.front(); que.pop();
		//if (st.first == g){
		//	res = st.second;
		//	break;
		//}
		if (done.count(st.first)) continue;
		done.insert(st);
		
		int p = 0;
		while (st.first[p] != '0') p++;
		
		for (int dir = 0; dir < 4; dir++){
			P tmp = st;
			tmp.second++;
			int to = p + d[dir];
			if (to < 0 || to >= 8) continue;
			if (p + to == 7 && dir % 2 == 0) continue;
			swap(tmp.first[p], tmp.first[to]);
			que.push(tmp);
		}
	}
	
	while (true){
		string g;
		for (int i = 0; i < 8; i++){
			string a;
			if (!(cin >> a)) return 0;
			g += a;
		}
		
		printf("%d\n", done[g]);
	}
	
	return 0;
}