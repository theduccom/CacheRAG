#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

int main(){

  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    double xa, ya, ra;
    double xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    double d = sqrt( (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb) );
    int ans = 0;

    if( ra > d + rb ) ans = 2;
    else if( rb > d + ra ) ans = -2;
    else if( (ra)+(rb) >= d ) ans = 1;


    cout << ans << endl;
  }

  return 0;
}