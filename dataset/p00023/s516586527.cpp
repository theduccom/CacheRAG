#include <iostream>
#include <cmath>
using namespace std;

int main(void){
  int N; cin >> N;
  for(int i = 0; i < N; i++){
    int ans = 0;
    double xa, ya, ra, xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    double dist = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    if(ra < rb && dist + ra < rb) ans = -2;
    else if(rb < ra && dist + rb < ra) ans = 2;
    else if(dist <= ra + rb) ans = 1;
    else if(dist > ra + rb) ans = 0;
    cout << ans << endl;
  }
  return 0;
}