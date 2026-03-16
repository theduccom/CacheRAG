#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)

template<typename T>
void remove(vector<T>& vector, unsigned int index){
vector.erase(vector.begin() + index);
}

typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m;

int main(void){
	while(cin >> n >> m, n||m){
		int cost[120][120];
		int timm[120][120];
		fill_n(*cost, 120*120, 10000000);
		fill_n(*timm, 120*120, 10000000);
		for(int i = 0; i < n; i++){
			int a, b,c,t;
			cin >> a >> b >> c >> t;
			cost[a][b] = c;
			cost[b][a] = c;
			timm[a][b] = t;
			timm[b][a] = t;
		}
		for(int k=1;k<m+1;++k)for(int i=1;i<m+1;++i)for(int j=1;j<m+1;++j){
			cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
			timm[i][j] = min(timm[i][j], timm[i][k] + timm[k][j]);
		}
		int k;
		cin >> k;
		rep(i, k){
			int a, b, c;
			cin >> a >> b >> c;
			if(!c)
				cout << cost[a][b] << endl;
			else
				cout << timm[a][b] << endl;
		}
	}

	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}