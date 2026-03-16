#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  double ax,ay,ar,bx,by,br;
  double dis;

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> ax >> ay >> ar >> bx >> by >> br;

    dis = sqrt( (ax-bx)*(ax-bx) + (ay-by)*(ay-by) );
    if( dis > ar + br)cout << 0 << endl;
    else if( br < ar && dis < ar - br)cout << 2 << endl;
    else if( ar < br && dis < br - ar)cout << -2 << endl;
    else cout << 1 << endl;
  }
}