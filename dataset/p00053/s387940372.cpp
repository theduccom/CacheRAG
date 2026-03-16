#include<iostream>
using namespace std;
int main(){
  bool num[1000001] = {false};
  for(int i=2; i<1000; i++) if(!num[i]) for(int j=i*i; j<1000001; j+=i) num[j] = true;
  int n;
  while(cin >>n,n){
    int ans = 0;
    for(int i=2; n>0; i++) if(!num[i]){ans+=i;n--;}
    cout <<ans<<endl;
  }
  return 0;
}