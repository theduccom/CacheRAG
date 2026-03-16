//Circles Interesection
#include<bits/stdc++.h>
using namespace std;

double dis(double x1, double y1, double x2, double y2){
  return sqrt(pow(x1-x2, 2.0)+pow(y1-y2, 2.0));
}

int main(){
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    double xa, ya, ra, xb, yb, rb, d;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    d = dis(xa, ya, xb, yb);
    if(d > ra+rb) cout << "0" << endl;
    else if(d+rb < ra) cout << "2" << endl;
    else if(d+ra < rb) cout << "-2" << endl;
    else cout << "1" << endl;
  }
  return 0;
}