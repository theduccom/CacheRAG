#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
 
#define MP make_pair
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,n) for(int i=1;i<(n);i++)
#define REP2(i,d,n) for(int i=(d);i<(n);i++)
#define RREP(i,n) for(int i=(n);i>=0;i--)
#define CLR(a) memset((a),0,sizeof(a))
#define MCLR(a) memset((a),-1,sizeof(a))
#define RANGE(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))
 
using namespace std;
 
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI > VVI;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef pair<int,int> PII;
typedef pair<int,string> PIS;
 
const int INF = 0x3f3f3f;
const LL INFL = 0x3f3f3f3f3f3f3f3fLL;
const double EPS = 1e-9;
 
const int DX[]={1,0,-1,0},DY[]={0,-4,0,4};



int main(){
	map<string,int> ans;
	set<string> used;
	string now = "01234567";

	used.insert(now);
	ans[now] = 0;

	priority_queue<PIS, vector<PIS>, greater<PIS> > que;
	que.push(PIS(0,now));
	while(!que.empty()){
		PIS use = que.top();
		que.pop();

		int idx = 0;
		REP(i,8){
			if(use.second[i] == '0'){
				idx = i;
			}
		}
		if(idx != 0 && idx != 4){
			string ns = use.second;
			swap(ns[idx],ns[idx-1]);
			if(used.count(ns) == 0){
				used.insert(ns);
				ans[ns] = use.first+1;
				que.push(PIS(use.first+1,ns));
			}
		}
		if(idx != 3 && idx != 7){
			string ns = use.second;
			swap(ns[idx],ns[idx+1]);
			if(used.count(ns) == 0){
				used.insert(ns);
				ans[ns] = use.first+1;
				que.push(PIS(use.first+1,ns));
			}
		}
		if(idx < 4){
			string ns = use.second;
			swap(ns[idx],ns[idx+4]);
			if(used.count(ns) == 0){
				used.insert(ns);
				ans[ns] = use.first+1;
				que.push(PIS(use.first+1,ns));
			}
		}
		if(3 < idx){
			string ns = use.second;
			swap(ns[idx],ns[idx-4]);
			if(used.count(ns) == 0){
				used.insert(ns);
				ans[ns] = use.first+1;
				que.push(PIS(use.first+1,ns));
			}
		}
	}

	char buf;
	while(cin >> buf){
		string str = "";
		str += buf;
		REP2(i,1,8){
			cin >> buf;
			str += buf;
		}

		cout << ans[str] << endl;
	}
}