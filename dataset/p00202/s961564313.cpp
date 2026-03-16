#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool sosuu[1111111];
vector<int> v;
int a[33],x,N;
//bool dp[33][1111111];
//bool used[33][1111111];
bool solve(int n,int m){
  if(m == 0) return true;
  if(n == N) return false;
  //if(used[n][m]) return dp[n][m];
  //used[n][m] = true;

  bool res = solve(n+1,m);
  if(!res && m >= a[n]) res |= solve(n,m-a[n]);
  //return dp[n][m] = res;
  return res;
}
int main(void){
  sosuu[0] = sosuu[1] = true;
  for(int i = 0; i*i <= 1000000; i++){
    if(sosuu[i]) continue;
    for(int j = i+i; j <= 1000000; j += i){
      sosuu[j] = true;
    }
  }
  for(int i = 0; i <= 1000000; i++){
    if(!sosuu[i]){
      v.push_back(i);
    }
  }

  while(cin >> N >> x){
    if(!N)break;
    //memset(used,false,sizeof(used));
    for(int i = 0; i < N; i++){
      cin >> a[i];
    }
    int i;
    for(i = (int)v.size()-1;i >= 0; i--){
      if(x < v[i]) continue;
      if(solve(0,v[i]))break;
    }
    if(i+1){
      cout << v[i] << endl;
    }else{
      cout << "NA" << endl;
    }
  }
}