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
  vector<int> a(5);
  while(cin>>a[0]){
    char d;
    string ans;
    rep(i,4)cin>>d>>a[i+1];
    sort(all(a));
    int co=1;
    rep(i,4)if(a[i]!=a[i+1])co++;
    if(a[0]==a[3]||a[1]==a[4])ans="four card";
    else if((a[0]==a[2])&&(a[3]==a[4])||(a[2]==a[4])&&(a[0]==a[1]))ans="full house";
    else if((a[0]==a[2])||(a[1]==a[3])||(a[2]==a[4]))ans="three card";
    else if(co==3)ans="two pair";
    else if(co==4)ans="one pair";
    else if((a[4]-a[0]==4)||(a[1]-a[0]==9)||(a[4]-a[3]==9))ans="straight";
    else ans="null";
    cout<<ans<<endl;
  }
}