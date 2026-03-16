#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <time.h>
 
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FFOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,b) FOR(i,0,b)
#define RREP(i,b) FFOR(i,1,b)
#define PB push_back
#define F first
#define S second
#define BE(c) c.begin(),c.end()
using namespace std;
typedef long long LL;
typedef int ut;
typedef long double ld;
typedef pair<ut,ut> pr;
typedef vector<pr> Vpr;
typedef vector<ut> VI;
typedef pair<ut,pr> ppr;
typedef priority_queue<pr,Vpr, greater<pr> > PQ;
const int SIZE=1e+5 + 1;
const ut INF=1<<30;
const ld eps=1e-6;
const LL mod=1e+9 + 7;

int main() {
	int n;
	while(cin >> n && n){
		bool check[4096] = {0};
		LL sum[4096] = {0};
		vector<int> data;
		REP(i,n){
			LL id, money, num; 
			scanf("%lld%lld%lld", &id, &money, &num);
			if(!check[id]){
				check[id] = true;
				data.PB(id);
			}
			sum[id] += money * num;
		}
		bool ok = false;
		REP(i,data.size()){
			if(sum[data[i]] >= 1000000){
				printf("%d\n", data[i]);
				ok = true;
			}
		}
		if(!ok)
			cout << "NA" << endl;
	}
	return 0;
}