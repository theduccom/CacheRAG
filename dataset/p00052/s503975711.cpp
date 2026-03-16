#include <iostream>

using namespace std;

int solve(int n){
  int res = 0;
  for(int i=1;i<=n;i++){
    int j = i;
    while(j%5 == 0){
      res++;
      j /= 5;
    }
  }
  return res;
}

int main(){
  int n;
  while(cin>>n && n){
    cout << solve(n) <<endl;
  }
  return 0;
}