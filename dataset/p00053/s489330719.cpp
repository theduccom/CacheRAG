#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define MAX 1000001

int main(){
  bool p[MAX];
  memset(p, true, sizeof(p));
  p[1] = p[0] = 0;
  for(int i = 0 ; i < MAX ; i++){
    if(p[i]){
      for(int j = 2 * i ; j < MAX ; j += i){
	p[j] = 0;
      }
    }
  }
 
  int n;
  while(cin >> n, n){
    unsigned long long cnt = 0, ans = 0;
    for(int i = 0 ; ; i++){
      if(cnt == n) break;
      if(p[i] == true){
	ans += i;
	cnt++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}