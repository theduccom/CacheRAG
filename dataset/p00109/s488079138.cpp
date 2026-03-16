#include<iostream>
#include<string>
#include<map>
using namespace std;
#define ans pair<int, int>
ans equation(string s, int p = 0);
ans factor(string s, int p = 0);
ans term(string s, int p = 0);
int main(){
  int n;
  cin >>n;
  while(n--){
    string s;
    cin >>s;
    ans r = equation(s);
    cout <<r.first<<endl;
  }
  return 0;
}
ans equation(string s, int p){
  ans r = factor(s,p);
  while(s[r.second] == '+' || s[r.second] == '-'){
    ans r_dash = factor(s,r.second+1);
    if(s[r.second] == '+'){r.first += r_dash.first;}
    if(s[r.second] == '-'){r.first -= r_dash.first;}
    r.second = r_dash.second;
  }
  return r;
}
ans factor(string s, int p){
  ans r = term(s,p);
  while(s[r.second] == '*' || s[r.second] == '/'){
    ans r_dash = term(s,r.second+1);
    if(s[r.second] == '*'){r.first *= r_dash.first;}
    if(s[r.second] == '/'){r.first /= r_dash.first;}
    r.second = r_dash.second;
  }
  return r;
}
ans term(string s, int p){
  if(s[p] == '('){
    ans r = equation(s,p+1);
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