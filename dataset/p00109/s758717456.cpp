//suhan lee,saitama university

#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <ctime>
#include <climits>
#include <cassert>
#include <complex>
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define repn(i,n) for(int i=0;i<n;i++)
#define EACH(t,i,c) for(t::iterator i=(c).begin(); i!=(c).end(); ++i)
#define pb push_back 
#define pf push_front
ll ex1(string input,ll& i);
ll ex2(string input,ll& i);
ll ex3(string input,ll& i);
ll exnum(string input,ll& i);
ll ex1(string input,ll& i){
  ll a=0;;
  a=+ex2(input,i);
  while(true){
    if(input[i]=='+')
      a= a+ex2(input,++i);
    else if(input[i]=='-')
      a=a-ex2(input,++i);
    else return a;
  }
}

ll ex2(string input,ll& i){
  ll a=ex3(input,i);
  while(true){
    if(input[i]=='*')
      a*=ex3(input,++i);
    else if(input[i]=='/')
      a/=ex3(input,++i);
    else return a;
  }
}
ll ex3(string input,ll& i){
  ll a;
  if(input[i]=='('){
    a=ex1(input,++i);
    i++;
  }
  else a=exnum(input,i);
  return a;
}
ll exnum(string input,ll &i){
  ll a=0;
  while(isdigit(input[i])){
    //  cout<<"i:"<<i<<endl;
    a*=10;
    a+=input[i]-'0';
    i++;
  }
  //  cout<<"a:"<<a<<endl;
  return a;
}

int main(){
  ll n;
  cin>>n;
  repn(k,n){
    ll i=0;
    string input;
    cin>>input;
    cout<<ex1(input,i)<<endl;
  }
  return 0;
}