
// 再帰的下向き構文解析

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int expression(void);

string str;
int pos;

int factor(void){

  int num = 0;
  if( isdigit( str[pos] ) ){ // '0' <= str[pos] && str[pos] <= '9' 
    while( isdigit( str[pos] ) ){
      num *= 10;
      num += str[pos] - '0';
      pos++;
    }
    return num;
  }else if( str[pos] == '(' ){
    pos++;
    int res = expression();
    pos++; // ')' の分
    return res;
  }

}

int term(void){

  int res = factor();
  while(1){

    if( str[pos] == '*' ){
      pos++;
      res *= factor();
    }else if( str[pos] == '/' ){
      pos++;
      res /= factor();
    }else break;

  }
  return res;
}

int expression(void){

  int res = term();
  while(1){

    if( str[pos] == '+' ){
      pos++;
      res += term();
    }else if( str[pos] == '-' ){
      pos++;
    res -= term();
    }else break;

  }
  return res;
}

int main(void){

  int dn;
  cin >> dn;

  while(dn--){
    pos = 0;
    cin >> str;
    cout << expression() << endl;
  }
  return 0;
}