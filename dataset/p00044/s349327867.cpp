#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
using namespace std;


int main(){

  vector<bool> prime(60000, true);
  prime[0] = false;
  prime[1] = false;
  for(int i=2; i<60000; i++){
    if( !prime[i] ) continue;
    for(int j=i*2; j<60000; j+=i){
      prime[j] = false;
    }
  }

  int n;
  while(cin >> n){
    int tmp = 2;
    for(int i=n-1; i>=0; i--){
      if( prime[i] ){
        tmp = i;
        break;
      }
    }
    for(int i=n+1; i<60000; i++){
      if( prime[i] ){
        cout << tmp << " " << i << endl;
        break;
      }
    }
  }

  return 0;
}