#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  double a,s;
  while(cin>>a){
    s=a;
    for(int i=0;i<4;i++){
      a*=2;
      s+=a;
      a/=3.0;
      s+=a;
    }
    s+=a*2;
    printf("%lf\n",s);
  }
  return 0;
}