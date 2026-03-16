#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

string s;
 
typedef string::const_iterator State;
int expression(State&);
int term(State&);
int number(State&);
int factor(State&);
 
int expression(State &begin){
  int ret = term(begin);
  while(1){
    if(*begin == '+'){
      begin++;
      ret += term(begin);
    }
    else if(*begin == '-'){
      begin++;
      ret -= term(begin);
    }
    else break;
  }
  return ret;
}
 
 
int term(State &begin){
  int ret = factor(begin);
  while(1){
    if(*begin == '*'){
      begin++;
      ret *= factor(begin);
    }
    else if(*begin == '/'){
      begin++;
      int tmp = factor(begin);
      ret /= tmp;
    }
    else break;
  }
  return ret;
}
 
int number(State &begin){
  int ret = 0;
  while(isdigit(*begin)){
    ret *= 10;
    ret += *begin-'0';
    begin++;
  }
  return ret;
}
 
int factor(State &begin){
  if(*begin == '('){
    begin++;
    int ret = expression(begin);
    begin++;
    return ret;
  }
  else return number(begin);
}

int main(){
  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> s;
    State ss = s.begin();
    int ans = expression(ss);
    cout << ans << endl;
  }
}