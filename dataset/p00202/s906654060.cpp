#include<iostream>
#define N 1000001
using namespace std;
int main(){
  int p[N]={0};
  for(int i=3;i<N;i+=2) p[i] = 1;
  p[2] = 1;
  for(int i=3;i<=1000;i+=2){
    if(p[i]==1){
      for(int j=2*i;j<N;j+=i) p[j] = 0;
    }
  }
  int n,x;
  while(cin >> n >> x){
    if(n==0&&x==0) break;
    int t[x+1];
    for(int i=0;i<=x;i++) t[i] = 0;
    for(int i=0;i<n;i++){
      int k;
      cin >> k;
      if(k<=x) t[k] = 1;
      for(int j=1;j<=x;j++){
    if(t[j]==1&&j+k<=x) t[j+k] = 1;
      }
    }
    bool ok = false;
    for(int i=x;i>=0;i--){
      if(t[i]==1&&p[i]==1){
    cout << i << endl;
    ok = true;
    break;
      }
    }
    if(!ok) cout << "NA" << endl;
  }
  return 0;
}
