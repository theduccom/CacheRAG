#include<iostream>
using namespace std;
int main(){
  double ans,nc=0,count=0;
  int sa,sv,answer=0,ansk;
  char c;
  while(cin>>sa>>c>>sv){
    answer += sa * sv;
    nc += sv;
    count++;
  }
  cout << answer << endl;
  ans = nc / count;
  ans +=0.5;
  ansk = ans;
  cout << ansk << endl;
  return 0;
}