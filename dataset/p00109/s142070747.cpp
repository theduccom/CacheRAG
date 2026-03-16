#include<iostream>
#include<string>
#include<map>
using namespace std;
#define ans pair<int, int>
string s;
ans equation(int p);
ans factor(int p);
ans term(int p);
int main(){
  int n;
  cin >>n;
  while(n--){
    cin >>s;
    ans r = equation(0);
    cout <<r.first<<endl;
  }
  return 0;
}
ans equation(int p){
  ans r = factor(p);
  while(s[r.second] == '+' || s[r.second] == '-'){
    ans r_dash = factor(r.second+1);
    if(s[r.second] == '+'){r.first += r_dash.first;}
    if(s[r.second] == '-'){r.first -= r_dash.first;}
    r.second = r_dash.second;
  }
  return r;
}
ans factor(int p){
  ans r = term(p);
  while(s[r.second] == '*' || s[r.second] == '/'){
    ans r_dash = term(r.second+1);
    if(s[r.second] == '*'){r.first *= r_dash.first;}
    if(s[r.second] == '/'){r.first /= r_dash.first;}
    r.second = r_dash.second;
  }
  return r;
}
ans term(int p){
  if(s[p] == '('){
    ans r = equation(p+1);
    r.second++;
    return r;
  }
  else{
    int v = 0;
    while(isdigit(s[p])){
      v = v*10+s[p++]-'0';
    }
    return ans(v,p);
  }
}