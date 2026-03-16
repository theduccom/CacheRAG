#include<iostream>
using namespace std;
int main(){
  bool num[1000001]={false};
  for(int i=2; i<1000; i++) if(!num[i]) for(int j=i*i; j<1000001; j+=i) num[j] = true;
  for(int n; cin >>n;){
    for(int i=n-1;;i--) if(!num[i]){cout <<i<<" ";break;}
    for(int i=n+1;;i++) if(!num[i]){cout <<i<<endl;break;}
  }
  return 0;
}