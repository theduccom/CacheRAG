#include<iostream>

using namespace std;

int main(){
  int data[14];
  for(int i=0, j=1; i<14; ++i, j*=5) data[i]=j;
  int n;
  while(1){
    cin >> n;
    if(!n) break;
    int ans=0;
    for(int i=1; i<14; ++i){
      if(n < data[i]) break;
      ans += n / data[i];
    }
    cout << ans << endl;
  }
  return 0;
}