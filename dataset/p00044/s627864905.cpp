#include<bits/stdc++.h>
using namespace std;

int P[50010];
map<int,int> idx;

int prime() {
  int i=3,j,k,cnt=1;
  P[0] = 2;
  for(i=3;i<=60000;i+=2){
    k=0;
    for(j=3;j<=sqrt(i);j+=2){
      if(i%j==0){
	k=1;
	break;
      }
    }
    if(k==0) {
      P[cnt] = i;
      cnt++;
    }
  }
  return cnt;
}

int main(){
  int n,cnt;
  cnt = prime();
  while(cin >> n){
    for(int i=0;i<cnt;i++){
      if(n == P[i]){
	cout << P[i-1] << " " << P[i+1] << endl;
	break;
      }
      else if(n < P[i]){
	cout << P[i-1] << " " << P[i] << endl;
	break;
      }
    }
  }
}