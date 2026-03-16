#include<iostream>
#define N 50000
using namespace std;
int main(){
  int n;
  int p[N]={0};
  for(int i=3;i<=N;i+=2) p[i] = 1;
  p[2] = 1;
  for(int i=3;i<=1000;i+=2){
    if(p[i]==1){
      for(int j=2*i;j<=N;j+=i) p[j] = 0;
    }
  }
  while(cin >> n){
    if(n==0) break;
    int count = 0;
    for(int i=2;i<=n/2;i++){
      if(p[i]==1&&p[n-i]==1) count++;
    }
    cout << count << endl;
  }
  return 0;
}