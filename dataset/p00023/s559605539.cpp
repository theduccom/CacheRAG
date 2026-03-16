#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N; cin >> N;
  while(N--){
    double xa, ya, ra, xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    if(pow(xa - xb, 2) + pow(ya - yb, 2) > pow(ra + rb, 2)){
      cout  << 0 << endl;
      continue;
    }

    

    if(sqrt(pow(xa - xb, 2) + pow(ya - yb, 2)) + rb < ra){
      cout << 2 << endl;
      continue;
    }
    if(sqrt(pow(xa - xb, 2) + pow(ya - yb, 2)) + ra < rb){
      cout << -2 << endl;
      continue;
    }
    cout << 1 << endl;
  }  

  return 0;
}