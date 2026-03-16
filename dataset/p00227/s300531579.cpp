#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,sum=0,d;
  int p[1100];
  while(1){
    sum = 0;
    cin >> n >> m;
    if(n==0 && m==0) break;
    for(int i=0; i<n; i++) {
      cin >> p[i];
      sum += p[i];
    }
    sort(p,p+n);
    reverse(p,p+n);
    /*for(int i=1; i<=n/m; i++) p[i*m-1]=0;
    for(int i=0; i<n; i++) sum += p[i];*/
    for(int i=1; i<=n/m; i++){
      d = m*i-1;
      sum -= p[d];
    }
    cout << sum << endl;
  }
  return 0;
}

