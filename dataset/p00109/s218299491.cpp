#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FIR first
#define SEC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;
typedef string::const_iterator State;
class ParseError{};

int factor(State &);

void consume(State &begin,char expected){
  if(*begin==expected){
    begin++;
  }else{
    cerr<<"Expected '"<<expected<<"'but got '"<<*begin<<"''"<<endl;
    cerr<<"Rest string is '";
    while(*begin){
      cerr<<*begin++;
    }
    cerr<<"'"<<endl;
    throw ParseError();
  }
}

int number(State &begin){
  int ret=0;
  while(isdigit(*begin)){
    ret*=10;
    ret+=*begin-'0';
    begin++;
  }
  return ret;
}

int term(State &begin){
  int ret=factor(begin);
  for(;;){
    if(*begin=='*'){
      begin++;
      ret*=factor(begin);
    }else if(*begin=='/'){
      begin++;
      ret/=factor(begin);
    }else{
      break;
    }
  }
  return ret;
}

int expr(State &begin){
  int ret=term(begin);
  for(;;){
    if(*begin=='+'){
      begin++;
      ret+=term(begin);
    }else if(*begin=='-'){
      begin++;
      ret-=term(begin);
    }else{
      break;
    }
  }
  return ret;
}
int factor(State &begin){
  if(*begin=='('){
    begin++;
    int ret=expr(begin);
    begin++;
    return ret;
  }else{
    return number(begin);
  }
}

signed main(){
  int n;
  cin>>n;
  cin.ignore();
  REP(i,n){
    string s;
    getline(cin,s);
    State begin=s.begin();
    int ans=expr(begin);
    cout<<ans<<endl;
  }
  return 0;
}