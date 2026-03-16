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
    string a,b;
    cin>>a>>b;
    if(a.size()<b.size())swap(a,b);
    while(a.size()!=b.size())b='0'+b;
    //cout<<a<<endl<<b<<endl;
    rep(i,a.size()){
      int tmp=a.size()-i-1;
      a[tmp]+=b[tmp]-'0';
      if(!tmp)break;
      if(a[tmp]>'9'){a[tmp]-=10;a[tmp-1]++;}
    }
    if(a[0]>'9'){a[0]-=10;a='1'+a;}
    if(a.size()>80)cout<<"overflow"<<endl;
    else cout<<a<<endl;
  }
}