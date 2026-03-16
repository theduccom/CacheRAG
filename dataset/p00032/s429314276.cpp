#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,ans1=0,ans2=0;
  char x[3];
  while(cin >> a && a != EOF){
    cin >> x[0] >> b >> x[1] >> c;
    if( a*a + b*b == c*c)ans1++;
    if(a == b)ans2++;
  }
  cout << ans1 << endl << ans2 <<endl;
  return 0;
}
    