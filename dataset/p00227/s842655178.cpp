#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){

  int n,m,p;
  int d[1001];
  int ans;

  while(true){
    cin >> n >> m;
    if(!n && !m) break;

    memset(d,0,sizeof(d));
    p = -1;
    ans = 0;

    for(int i=0;i<n;i++) cin >> d[i];

    sort(d,d+n);
    reverse(d,d+n);

    for(int i=0;i<n;i++){
      if(p+m == i) p += m;
      else ans += d[i];
    }

    cout << ans << endl;

  }
}