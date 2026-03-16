#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main(void){
 
  int CNT = 0;
  string s;
  while( cin >> s ){
 
    int N = s.size();
    int cnt = 0;
    if( N == 1 ){
      CNT++;
      // cout << "OK" << endl;
      continue;
    }
    int x = 0;
    int y = N - 1;
    while(1){
 
      if( x >= N/2 )break;
      
      if( s[x] == s[y] ){
    cnt++;
    x++;
    y--;
      }
      else{
    break;
      }
    }
     
    if( cnt == N/2 ){
      CNT++;
      // cout << "ok" << endl;
    }
  }
  cout << CNT << endl;
  return 0;
}