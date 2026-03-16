#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define INF 1000000010
#define EPS 1e-9
#define fst first
#define scd second

#define debug(x) cout<<x<<endl;
#define repi(i,x,n) for(int i=x;i<n;i++)
#define rep(i,n) repi(i,0,n)
#define lp(i,n) repi(i,0,n)
#define repn(i,n) for(int i=n;i>=0;i--)
#define int long long
#define endl "\n"

typedef string::const_iterator State;

int expression(State &begin);

int number(State &begin){
  int num=0;
  while(isdigit(*begin)){
    num*=10;
    num+=(*begin-'0');
    begin++;
  }
  return num;
}

int program(State &begin){
  int num;
  if(*begin=='('){
    begin++;
    num=expression(begin);
    begin++;
  }
  else num=number(begin);
  return num;
}

int term(State &begin){
  int num=program(begin);
  while(1){
    if(*begin=='*'){
      begin++;
      num*=program(begin);
    }else if(*begin=='/'){
      begin++;
      num/=program(begin);
    }else break;
  }
  return num;
}

int expression(State &begin){
  int num=term(begin);
  while(1){
    if(*begin=='+'){
      begin++;
      num+=term(begin);
    }else if(*begin=='-'){
      begin++;
      num-=term(begin);
    }
    else break;
      
  }
  return num;
}




signed main(){
  cin.tie(0);	
  //ios::sync_with_stdio(false);
  int n;
  cin>>n;
  rep(i,n){
    string s;
    cin>>s;
    State begin=s.begin();
    cout<<expression(begin)<<endl;
  }

  return 0;
}



    


