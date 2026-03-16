#include<bits/stdc++.h>
using namespace std;

int P[10010];
int sum[10010]={0};

void prime() {
  int i=3,j,k,cnt=1;
  P[0] = 2;
  while(cnt < 10005){
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
    i+=2;
  }
  sum[0] = P[0];
  for(int i=1;i<10005;i++){
    sum[i] = sum[i-1] + P[i];
  }
}

int main(){
  int n;
  prime();
  while(cin >> n , n){
    cout << sum[n-1] << endl;
  }
}