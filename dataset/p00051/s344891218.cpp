#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define DEB 0

int main(){
  string in;
  int n;
  while(~scanf("%d",&n)){
    rep(i,n){
      cin>>in;
      sort(in.begin(), in.end());
      string rin = string(in.rbegin(), in.rend());
      printf("%d\n",atoi(rin.c_str()) - atoi(in.c_str()));
    }
  }
  return 0;
}