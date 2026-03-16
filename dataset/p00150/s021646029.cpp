#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
  bool p[10001];
  memset(p, 1, sizeof(p));
  p[1] = p[0] = 0;
  for(int i = 0 ; i < 10001 ; i++){
    if(p[i]){
      for(int j = 2 * i ; j < 10001 ; j += i){
	p[j] = 0;
      }
    }
  }

  int n;
  while(cin >> n, n){
    for(int i = n ; ; i--){
      if(p[i] == 1 && p[i-2] == 1){
	cout << i-2 << ' ' << i << endl;
	break;
      }
    }
  }
  return 0;
}