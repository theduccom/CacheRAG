#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

struct State{
  int result,backpos;
  State(int a,int b){
    result=a;
    backpos=b;
  }
};

bool is_numchar(char c){
  if('1'<=c&&c<='9') return true;
  if(c=='0') return true;
  return false;
}

int strtoint(std::string s){
  int result=0;
  for(int i=0;i<s.size();i++){
    result+=(s[i]-'0')*(int)std::pow(10,s.size()-1-i);
  }
  return result;
}



State expr(const std::string& s,int frontpos);
State factor(const std::string& s,int frontpos);
State term(const std::string& s,int frontpos);
State number(const std::string& s,int frontpos);

State expr(const std::string& s,int frontpos){
  State state=term(s,frontpos);
  while(1){
    int op_pos=state.backpos+1;
    if(op_pos<s.size()&&s[op_pos]=='+'){
      State new_state=term(s,op_pos+1);
      state.result+=new_state.result;
      state.backpos=new_state.backpos;
    }else if(op_pos<s.size()&&s[op_pos]=='-') {
      State new_state = term(s, op_pos + 1);
      state.result -= new_state.result;
      state.backpos = new_state.backpos;
    }else break;
  }
  return state;
}

State term(const std::string& s,int frontpos){
  State state=factor(s,frontpos);
  while(1){
    int op_pos=state.backpos+1;
    if(op_pos<s.size()&&s[op_pos]=='*'){
      State new_state=factor(s,op_pos+1);
      state.result*=new_state.result;
      state.backpos=new_state.backpos;
    }else if(op_pos<s.size()&&s[op_pos]=='/') {
      State new_state = factor(s, op_pos + 1);
      state.result /= new_state.result;
      state.backpos = new_state.backpos;
    }else break;
  }
  return state;
}

State factor(const std::string& s,int frontpos){
  if(s[frontpos]=='('){
    State result=expr(s,frontpos+1);
    result.backpos++;// ')'を読み飛ばす
    return result;
  }else{
    return number(s,frontpos);
  }
}

State number(const std::string& s,int frontpos){
  int result;
  int backpos=frontpos;
  std::string numstr;
  for(int i=frontpos;i<s.size();i++){
    if(is_numchar(s[i])){
      numstr+=s[i];
      backpos++;
    }else {
      backpos--;
      break;
    }
  }
  result=strtoint(numstr);
  return State(result,backpos);
}

int main(void) {
  cout << std::fixed << std::setprecision(10);
  cin.tie(0);
  std::ios::sync_with_stdio(false);

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    std::string s;
    cin>>s;
    std::string throw_s;
    for(int j=0;j<s.size()-1;j++){
      throw_s+=s[j];
    }
    cout<<expr(throw_s,0).result<<endl;

  }





  



  return 0;
}

