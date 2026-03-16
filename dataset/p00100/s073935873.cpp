#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };
struct salary{
	int no;
	long long int sell;
};

int main() {
	
	int n;
	while(cin>>n,n){
		vector<salary> vs;
		set<int> si;
		REP(i, n){
			int no;
			long long int v,sum;
			cin >> no >> v >> sum;
			if (si.find(no) == si.end()){
				vs.push_back({ no, (long long int)(v*sum) });
				si.insert(no);
			}
			else
				REP(j, vs.size()){
				if (vs[j].no == no)
					vs[j].sell += (long long int)(v*sum);
			}
		}
		bool b = false;
		REP(j, vs.size()){
			if (vs[j].sell >= 1000000){
				cout << vs[j].no << endl;
				b = true;
			}
		}
		if (!b)
			cout <<"NA" << endl;
	}
}