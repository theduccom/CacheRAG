/*
NOTE :
*min_element(.begin(),.end())
*max_element(.begin(),.end())
stack push pop top
queue push pop front
priority_queue<> pq
 push()  pop() size()  top()
map<>
 find() begin() end() insert(map<>::value_type())
pair<>
sort(.begin(), .end())
sort(arr, arr+N)
sort(a, a+N, greater<int>())
binary_search(vc.begin(), vc.end(), x)  //binary_search???true, false?????????
vector<int>::iterator lit = lower_bound(vc.begin(), vc.end(), x);
  lower_bound?????????????????????"??\???"????????????????????????????????????????????¬???????????????
vector<int>::iterator uit = upper_bound(vc.begin(), vc.end(), x);
  upper_bound????????????????????????"?¶???????"?????????????????????????????????????????¬???????????????
*/
#include <iostream>
#include <cstdio>
#include <climits>
#include <cmath>
#include <cassert>
#include <sstream>
#include <algorithm>
#include <valarray>
#include <utility>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>

#define MAX 100
#define INF 1<<20
#define LLINF 10e12 // 1<<31 // 2^31
#define REP(i,n) for(int i=0;i<n;i++)
#define REP2(i,a,n) for(int i=(a);i<(n);i++)
#define SET(a,c) memset(a,c,sizeof a)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define FOREACH(i,c) for(auto (i) : (c))
#define BIT(i,j) ((i)>>(j))&1
#define ALL(o) (o).begin(), (o).end()
#define ERASE(o) (o).erase(unique(ALL((o))), (o).end());

using namespace std;
typedef long long ll;
typedef valarray<int> array_t;
/////
string key[3] =
{
  "the",
  "this",
  "that"
};
/////
int caeser(string S)
{
  int n = S.length();
  REP(i,26)
  {
    string tmp;
    REP(j,n)
    {
      if(S[j] == '.') continue;
      tmp += ((S[j]-'a'+i)%26)+'a';
    }
    REP(k,3) if(tmp == key[k]) return i;
  }
  return -1;
}

void decode(string &S,int t)
{
  if(t < 0) return;
  int n = S.length();
  REP(i,n)
  {
    if(S[i] == '.') continue;
    S[i] = ((S[i]-'a'+t)%26)+'a';
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  // FROM HERE

  string str;
  while(getline(cin,str))
  {
    int t, n;
    string tmp;
    vector<string> data;
    istringstream stream(str);
    while(getline(stream,tmp,' ')) data.push_back(tmp);
    n = data.size();
    REP(i,n) if((t=caeser(data[i]))!=-1) break;
    REP(i,n) decode(data[i],t);
    REP(i,n)
    {
      printf("%s",data[i].c_str());
      printf("%s",(i!=n-1)?" ":"\n");
    }
  }
  return 0;
}