#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>

#define REP(i,n) for(long long i=0;i<n;++i)
#define REPR(i,n) for(long long i=n;i>=0;--i)
#define REPI(itr,v) for(auto itr=v.begin();itr!=v.end();++itr)
#define REPIR(itr,v) for(auto itr=v.rbegin();itr!=v.rend();++itr)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
#define SORT(v,n) sort(v, v+n)
#define SORTV(v) sort(v.begin(), v.end())
#define ALL(v) v.begin(),v.end()
#define llong long long
#define INF 999999999
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define MP make_pair
#define SV(v) {for(long long sitr=0;sitr<v.size();++sitr){cin>>v[sitr];}}

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

using namespace std;

typedef pair<int,int> pii;

int main(){

  bool fi = true;
  while(true){
  int a, b;
  cin >> a >> b;
  bool f = false;
  if(a == 0 && b == 0) break;

  if(fi) fi = false;
  else
    cout << endl;

  FOR(i,a,b+1){
    if(i % 4 == 0){
      if(i % 100 == 0){
        if(i % 400 == 0){
          cout << i << endl;
          f = true;
        }
        
      }else{
        cout << i << endl;
        f = true;
      }
    }
  }

  if(!f){
    cout << "NA" << endl;
  }
  }
  return 0;
}


