#include <stdio.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
using ll = long long;

string str;
int id;
int expr();
int number(){
  int res = 0;
  for (; isdigit(str[id]); id++) {
    res *= 10;
    res += str[id] - '0';
  }
  return res;
}
int factor(){
  int res = 0;
  if(str[id] == '('){
    id++;
    res = expr();
    if(str[id] == ')') ++id;
    return res;
  }else {
  return number();
}

}
int term(){
  int res = factor();
  while(str[id] == '*' || str[id] == '/') {
    if (str[id] =='*') {
      ++id;
      res *= factor();
    } else {
      ++id;
      res /= factor();
    }
  } 
  return res;
}
int expr(){
  int res = term();
  while (str[id] == '+' || str[id] == '-') {
    if(str[id] == '+'){
      ++id;
      res += term();
    } else{
      ++id;
      res -= term();
    }
  }
  return res;
}
int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    id = 0;
    cin >> str;
    int ans = expr();
    cout << ans << endl;
  }
}
