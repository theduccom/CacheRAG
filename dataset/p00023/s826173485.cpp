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
  int n;
  cin>>n;
  while(n--){
    double x[2];
    double y[2];
    double r[2];
    rep(i,2)cin>>x[i]>>y[i]>>r[i];
    double d=hypot(x[1]-x[0],y[1]-y[0]);
    if(d>r[0]+r[1])cout<<0<<endl;
    else if(r[0]>r[1]&&r[0]-r[1]>d)cout<<2<<endl;
    else if(r[1]>r[0]&&r[1]-r[0]>d)cout<<-2<<endl;
    else cout<<1<<endl;
  }


}