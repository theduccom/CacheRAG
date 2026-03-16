
//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <tuple>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef vector<vector<PII> > VVPII;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const int DX[] = {0, 1, 0, -1};
const int DY[] = {-1, 0, 1, 0};

//other
//--------------------------------------------
#define RANGE(a, c, b) ((a <= b) && (b < c))

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int dijkstra(int from, int to, VVPII & nodes, int n){
	VI dist(nodes.size(), (int) 10e7);

	priority_queue<PII, vector<PII>, greater<PII> > q;
	q.emplace(0, from);
	dist[from] = 0;
	while(!q.empty()){
		int cost = q.top().first; // cost
		int place = q.top().second; // current place
		q.pop();
		if(dist[place] < cost) continue;
		for(PII node : nodes[place]){
			if(node.first + dist[place] < dist[node.second]){
				dist[node.second] = node.first + dist[place];
				q.emplace(dist[node.second], node.second);
			}
		}
	}
	REP(i, n){

	}
	return dist[to];
}


int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	char c;
	VVPII nodes(m);

	REP(i, m){
		int from, to, value;
		cin >> from >> c >> to >> c >> value;
		nodes[from].PB(MP(value, to));
		cin >> c >> value;
		nodes[to].PB(MP(value, from));
	}

	int start, goal, money, price;
	cin >> start >> c >> goal >> c;
	cin >> money >> c >> price;
	int go = dijkstra(start, goal, nodes, n);
	int back = dijkstra(goal, start, nodes, n);
	int reward = money - (price + go + back);
	cout << reward << endl;
	return 0;
}