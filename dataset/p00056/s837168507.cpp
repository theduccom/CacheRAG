#include<iostream>
using namespace std;
int main(){
  bool num[1000000] = {false};
  for(int i=2; i<1000; i++) if(!num[i]) for(int j=i*i; j<1000001; j+=i) num[j] = true;
  num[0] = num[1] = true;
  int n;
  while(cin >>n,n){
    int ans = 0;
    for(int i=2; i<=n/2; i++) if(!num[i] && !num[n-i]) ans++;
    cout <<ans<<endl;
  }
  return 0;
}