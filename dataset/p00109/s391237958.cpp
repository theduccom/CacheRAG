#include <bits/stdc++.h>

using namespace std;

class Calc{
private:
  int idx;
  string s;
public:
  Calc(string s) : s(s) {
    idx = 0;
  }
  int fact(){
    int res = 0;
    if(s[idx] == '('){
      idx++;
      res = exp();
      idx++;
    }else{
      while(isdigit(s[idx])){
        res *= 10;
        res += s[idx++]-'0';
      }
    }
    return res;
  }

  int term(){
    int res = fact();
    while(s[idx] == '*' || s[idx] == '/'){
      if(s[idx] == '*'){
        idx++;
        res *= fact();
      }else{
        idx++;
        res /= fact();
      }
    }
    return res;
  }

  int exp(){
    int res = term();
    while(s[idx] == '+' || s[idx] == '-'){
      if(s[idx] == '+'){
        idx++;
        res += term();
      }else{
        idx++;
        res -= term();
      }
    }
    return res;
  }

};

int main(){
  int Tc;
  string s;
  cin >> Tc;
  while(Tc--){
    cin >> s;
    s.resize(s.size()-1);
    Calc c(s);
    cout << c.exp() << endl;
  }
  return 0;
}