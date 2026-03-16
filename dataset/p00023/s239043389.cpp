#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  double xa,ya,ra,xb,yb,rb,d;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    d = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    // BがAの中にあるとき
    if(ra>rb && d < fabs(ra - rb)){
      cout << 2 << endl;
    } // AがBの中にあるとき
    else if(ra<rb && d < fabs(rb - ra)){
      cout << -2 << endl;
    } // 円周が交わってる
    else if(fabs(ra-rb) < d && d < ra + rb){
      cout << 1 << endl;
    } // 離れていないとき
    else if(d > ra + rb){
      cout << 0 << endl;
    }else {
      cout << 1 << endl;
    }
  }
}