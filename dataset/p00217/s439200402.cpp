#include<bits/stdc++.h>
#define endl '\n'
#define INF (1 << 21)
const int MOD = 1000000009;
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  int p;
  int d1, d2;
  int a_num, ans;
  
  
  cin >> n;

  while(n != 0){
    ans = -1;
    for(int i = 0;i < n;i++){
      cin >> p >> d1 >> d2;
      
      if(d1 + d2 > ans){
	ans = d1 + d2;
	a_num = p;
      }
    }
    cout << a_num << ' ' << ans << endl;
    cin >> n;
  }
         
  return 0;
}


