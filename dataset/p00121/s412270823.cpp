#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }


int INF = 1 << 30;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

vector<string> findNextPoint(string str)
{
	vector<string> next;
	
	int zero;
	rep(i, 8) if(str[i] == '0')
		zero = i;
	
	rep(i, 4)
	{
		int nx = zero % 4 + dx[i];
		int ny = zero / 4 + dy[i];
		
		if(0 <= nx && nx < 4 && 0 <= ny && ny < 4)
		{
			swap(str[ny * 4 + nx], str[zero]);
			next.push_back(str);
			swap(str[ny * 4 + nx], str[zero]);
		}
	}
	
	return next;
}

void init(map<string, int>& cost)
{
	string v = "01234567";
	
	do cost[v] = INF;
	while (next_permutation(ALL(v)));
}

void calc(map<string, int>& cost)
{
	cost["01234567"] = 0;
	
	queue<string> que;
	for(que.push("01234567"); !que.empty(); que.pop())
	{
		string now = que.front();
		vector<string> next = findNextPoint(now);
		
		rep(i, next.size())
		{
			if(cost[now] + 1 < cost[next[i]])
			{
				cost[next[i]] = cost[now] + 1;
				que.push(next[i]);
			}
		}
	}
}

int main()
{
	map<string, int> cost;

	init(cost);
	calc(cost);
	
	while(true)
	{
		char num;
		string board;
		
		rep(i, 8)
		{
			cin >> num;
			board += num;
		}
		
		if(cin.eof()) break;
		
		cout << cost[board] << endl;
	}
}