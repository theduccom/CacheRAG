//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
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
#include <climits>
#include <queue>

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
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


struct B{
  int n[8];
  int p;

  void dup(const B& rhs){
	REP(i,8) n[i] = rhs.n[i];
	p = rhs.p;
  }
  
  int encode(){
	int p = 1, res = 0;
	for(int i=0;i<8;++i){
	  res += p * n[i];
	  p *= 8;
	}
	return res;
  }
};

map<int,int> mem;
void calc(){
  B b;
  REP(i,8) b.n[i] = i;
  b.p = 0;
  queue<B> q;
  q.push(b);
  mem[b.encode()] = 0;

  while(!q.empty()){
	B pazz = q.front(); q.pop();
	int en = pazz.encode();

	if(pazz.p < 4){
	  B after; after.dup(pazz);
	  swap(after.n[after.p], after.n[after.p+4]);
	  after.p += 4;
	  if(mem.find(after.encode()) == mem.end()){
		mem[after.encode()] = mem[en] + 1;
		q.push(after);
	  }
	}
	else{
	  B after; after.dup(pazz);
	  swap(after.n[after.p], after.n[after.p-4]);
	  after.p -= 4;
	  if(mem.find(after.encode()) == mem.end()){
		mem[after.encode()] = mem[en] + 1;
		q.push(after);
	  }
	}
	if(pazz.p != 0 && pazz.p != 4){
	  B after; after.dup(pazz);
	  swap(after.n[after.p], after.n[after.p-1]);
	  after.p--;
	  if(mem.find(after.encode()) == mem.end()){
		mem[after.encode()] = mem[en] + 1;
		q.push(after);
	  }
	}
	if(pazz.p != 3 && pazz.p != 7){
	  B after; after.dup(pazz);
	  swap(after.n[after.p], after.n[after.p+1]);
	  after.p++;
	  if(mem.find(after.encode()) == mem.end()){
		mem[after.encode()] = mem[en] + 1;
		q.push(after);
	  }
	}
  }
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  calc();
  while(true){
	B b;
	REP(i,8){
	  if(!(cin >> b.n[i])) return 0;
	  if(b.n[i] == 0) b.p = i;
	}
	cout << mem[b.encode()] << endl;
  }

  return 0;
}