#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<string>
#include<algorithm>
#include<utility>
#include<math.h>
#include<iomanip>
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
const int INF = pow(10, 8);
int main(){
  double ax, ay, bx, by, cx, cy;char c;
  cin>>ax>>c>>ay>>bx>>c>>by;
  double ans=0;
  while(cin>>cx>>c>>cy){
    double d1 = pow((pow(ax-bx, 2)+pow(ay-by, 2)), 0.5);
    double d2 = pow((pow(bx-cx, 2)+pow(by-cy, 2)), 0.5);
    double d3 = pow((pow(cx-ax, 2)+pow(cy-ay, 2)), 0.5);
    double z = (d1+d2+d3)*0.5;
    ans += pow((z*(z-d1)*(z-d2)*(z-d3)), 0.5);
    bx=cx;by=cy;
    // cout<<fixed<<setprecision(10)<<ans<<endl;
  }
  cout<<fixed<<setprecision(10)<<ans<<endl;
  return 0;
}

