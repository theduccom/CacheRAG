#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin>>q;
  while(q--){
    double xa,ya,ra,xb,yb,rb;
    cin>>xa>>ya>>ra>>xb>>yb>>rb;

    int f=-1; 
    if(ra>rb) f=1,swap(ra,rb),swap(xa,xb),swap(ya,yb);
    double dis=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
 
    if(dis>ra+rb) cout << 0<<endl;
    else if(dis+ra<rb)cout << f*2<<endl;
    else cout << 1<<endl;
  }
  return 0;
}