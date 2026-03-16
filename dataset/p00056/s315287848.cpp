#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
  bool p[50001];
  memset(p, 1, sizeof(p));
  p[0] = p[1] = 0;
  for(int i = 0 ; i < 50001 ; i++){
    if(p[i]){
      for(int j = 2 * i ; j < 50001 ; j += i){
	p[j] = 0;
      }
    }
  }

  int n, sum;
  while(cin >> n, n){
    int cnt = 0;
    for(int i = 0 ; i <= n / 2 ; i++){
	if(p[i] == 1 && p[n - i] == 1) cnt++; 
    }
    cout << cnt << endl;
  }
  return 0;
}