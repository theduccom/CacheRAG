#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int exp();
int term();
int fact();
string s;
int id;

int main(void){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s;
    id = 0;
    cout << exp() << endl;
  }
}


int exp(){
  int res = term();
  while(1){
    char c = s[id];
    id++;
    if(c == '+') res += term();
    else if(c == '-') res -= term();
    else break;
  }
  return res;
}

int term(){
  int res = fact();
  while(1){
    char c = s[id];
    id++;
    if(c == '*') res *= fact();
    else if(c=='/') res /= fact();
    else break;
  }
  id--;
  return res;
}

int fact(){
  char c = s[id];
  id++;
  if(c == '(') return exp();
  if(c == '+') return fact();
  if(c == '-') return -fact();

  int res = c - '0';
  while(1){
    c = s[id];
    id++;
    if('0' <= c && c <= '9'){
      res *= 10;
      res += c - '0';
    }
    else break;
  }
  id--;
  return res;
}