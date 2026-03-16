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
  int tmp[10]={512,256,128,64,32,16,8,4,2,1};
  int in;
  while(cin>>in){
    vector<int>out;
    rep(i,10)if(in>=tmp[i]){in-=tmp[i];out.pb(tmp[i]);}
    sort(all(out));
    rep(i,out.size()-1)cout<<out[i]<<" ";
    cout<<out[out.size()-1]<<endl;
  }
}