#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
  double xa, ya, ra, xb, yb, rb;
  int n, ans;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    double d = sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
    double r = ra + rb;
    
    if(d > r){
      ans = 0;
    }
    else if(d <= r && d >= fabs(ra - rb)){
      ans = 1;
    }else{
      if(max(ra,rb) == ra) ans = 2;
      else ans = -2;
    }
    cout << ans << endl;
  }
}