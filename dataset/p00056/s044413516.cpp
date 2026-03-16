#include <iostream>
using namespace std;

int main(){
  int i,j,n,a[50000];
  a[0] = 0;
  a[1] = 0;
  for(i=2;i<50000;i++) a[i] = 1;
  for(i=2;i<=25000;i++){
    if(a[i] == 1){
      for(j=i*2;j<50000;j+=i) a[j] = 0;
    }
  }

  while(1){
    int ans;
    cin >> n;
    if(n == 0) break;
    ans = 0;
    for(i=2;i*2<=n;i++){
      if(a[i] == 1 && a[n-i] == 1) ans++;
    }
    cout << ans << endl;
  }

  return 0;
}