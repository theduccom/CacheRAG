#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,m;
  int a[1111];
  int x=-1;
  while(1){
    x=-1;
    int ans=0;
    cin >> n >> m;//nは購入数　mは最大数
    if(n==0 && m==0)break;
    for(int i=0;i<n;i++){
      cin >> a[i];
      ans+=a[i];
    }
    
    sort(a,a+n,greater<int>());
    
    
    while(n>=m){
      x+=m;
      ans-=a[x];
      n-=m;
    }
    
    cout << ans << endl;
  }
}