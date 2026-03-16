#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<climits>
#include<cmath>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

typedef unsigned int uint;
typedef long long ll;

using namespace std;
bool isSym(char *buff){
  int n = strlen(buff);
  for(int i=0; i<n/2; i++){
    if(buff[i] != buff[n-i-1]) return false;
  }
  return true;
}

int main(){
  char buff[256];
  int ans = 0;
  while(cin>>buff){
    if(isSym(buff))
      ans++;
  }
  cout << ans << endl;
}