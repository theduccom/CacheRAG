#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int l,w,h,m,n,r;
  for(;;){
    cin >> l >> w >> h;
    if(l==0 && w==0 && h==0) break;
    if(max(l,max(w,h)) == l) m = w*w + h*h;
    else if(max(l,max(w,h)) == w) m = l*l + h*h;
    else m = l*l + w*w;
    cin >> n;
    while(n--){
      cin >> r;
      if((2*r)*(2*r) > m) cout << "OK" << endl;
      else cout << "NA" << endl;
    }
  }
  return 0;
}