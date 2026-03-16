#include <bits/stdc++.h>
using namespace std;

int exp(string&, int&);
int term(string&, int&);
int factor(string&, int&);

int exp(string& str, int& p){
  int res = term(str, p);
  while(str[p] == '+' || str[p] == '-'){
    if(str[p] == '+'){
      p++;
      res += term(str, p);
    }else{
      p++;
      res -= term(str, p);
    }
  }
  return res;
}

int term(string& str, int& p){
  int res = factor(str, p);
  while(str[p] == '*' || str[p] == '/'){
    if(str[p] == '*'){
      p++;
      res *= factor(str, p);
    }else{
      p++;
      res /= factor(str, p);
    }
  }
  return res;
}

int factor(string& str, int& p){
  int res = 0;
  int keta = 1;
  int initp = p;
  if(str[p] == '('){
    while(str[p] != ')'){
      p++;
      res = exp(str, p);
    }
    p++;
  }else{
    while(isdigit(str[p])){
      p++;
    }
    for(int i=p-1; i >= initp; i--){
      res += keta * (str[i] - '0');
      keta *= 10;
    }
  }
  return res;
}


int main(void){
  int n; cin >> n;
  while(n--){
    int p=0;
    string str;
    cin >> str;
    cout << exp(str, p) << endl;
  }
  return 0;
}