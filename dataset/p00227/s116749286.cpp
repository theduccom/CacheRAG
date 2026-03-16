#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int p[1005];
int sum=0;

void solve(){
  for(int i=0;i<n;i++){
    cin >> p[i];
    sum+=p[i];
  }
  sort(p,p+n);
  reverse(p,p+n);
  for(int i=m-1;i<n;i+=m){
    sum-=p[i];
  }
  cout << sum << endl;
  sum=0;
}

int main(){
  while(cin >> n >> m){
    if(n==0 && m==0) break;
    solve();
  }
}