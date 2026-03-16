#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,ans;
  int a,pa,ha=0,sa=0,nd[8],da=10000000;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a;
    for(int i=0;i<8;i++){
      pa = a;
      pa /= da;
      nd[i] = pa;
      pa *= da;
      a -= pa;
      da /= 10;
    }
    da = 10000000;
    sort(nd,nd+8);
    for(int i=0;i<8;i++){
      sa += nd[i] * da;
      da /= 10;
    }
    da = 10000000;
    sort(nd,nd+8,greater<int>());
    for(int i=0;i<8;i++){
      ha += nd[i] * da;
      da /= 10;
    }
    ans = ha - sa;  
    cout << ans << endl;
    da = 10000000;
    sa = 0;
    ha = 0;
  }
  return 0;
}