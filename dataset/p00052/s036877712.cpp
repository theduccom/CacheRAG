#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#define fr first
#define sc second
using namespace std;
int main(){
  int n,N,cnt;
  while(cin >> N && N){
    n = N,cnt = 0;
    while(n > 0){
      cnt += n/5;
      n /= 5;
    }
    cout << cnt << endl;
  }
}