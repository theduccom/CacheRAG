#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

const int MAX = 20;
typedef pair<long double,long double> P;
P data[MAX];
int rev;
long double ans;

long double getlength(int i, int j){
  return sqrt((data[i].first - data[j].first)*(data[i].first - data[j].first)+
	      (data[i].second - data[j].second)*(data[i].second - data[j].second));

}
void solve(){
  long double num[3];
  for(int i = 1; i < rev-1; i++){
    long double z = 0;
    num[0] = getlength(0,i);
    num[1] = getlength(0,i+1);
    num[2] = getlength(i,i+1);
    z  = (num[0]+num[1]+num[2])/2;
    ans += sqrt(z*(z-num[0])*(z-num[1])*(z-num[2]));
  }
}
int main(){
  char c;
  while(cin >> data[rev].first >> c >> data[rev].second){
    rev++;
  }
  solve();
  // cout << ans << endl;
  printf("%.6Lf\n",ans);
  return 0;
}