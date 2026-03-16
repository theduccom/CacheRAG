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
  string s;
  cin>>n;
  getline(cin,s);
  rep(i,n){
    getline(cin,s);
    for(int j=7;j<=s.size();j++){
      if(s.substr(j-7,7)=="Hoshino")s[j-1]='a';
    }
    cout<<s<<endl;
  }

}