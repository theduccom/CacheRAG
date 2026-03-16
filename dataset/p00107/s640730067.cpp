#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double m[3];
void solve(){

}
int main(){
  while(cin >> m[0] >> m[1] >> m[2], m[0]||m[1]||m[2]){
    sort(m, m+3);
    double d = sqrt(m[0]*m[0]+m[1]*m[1]);
    int n;
    cin >> n;
    while(n--){
      double r;
      cin >> r;
      cout << (d<(r*2.)?"OK":"NA") << endl;
    }
  }
  return 0;
}