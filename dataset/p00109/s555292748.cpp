#include <iostream>
#include <string>
#include <cctype>

using namespace std;

typedef string::const_iterator State;

/*
  <num> ::= '1'|'2'|...|'0'
  <term> ::= <num or kakko> ('*' or '/' ) <num or kakko>
  <exp> ::= <term> ('+' or '-' ) <term>
  <kakko> ::= '(' <exp> ')'
  <factor> ::= <num> or <kakko>
*/

int number(State&);
int kakko(State&);
int factor(State&);
int term(State&);
int expression(State&);

int main(){
  string input;
  int n,ret;
  cin >> n;
  cin.ignore();
  for(int i = 0;i < n;i++){
    getline(cin, input);
    State begin = input.begin();
    ret = expression(begin);
    cout << ret << endl;
  }
  return 0;
}


int number(State &begin){
  int ret = 0;
  while(isdigit(*begin)){
    ret *= 10;
    ret += *begin - '0';
    ++begin;
  }
  return ret;
}

int factor(State &begin){
  int ret = 0;
  if(*begin == '('){
    begin++;
    ret += expression(begin);
    begin++;
  }else{
    return number(begin);
  }
  return ret;
}

int term(State &begin){
  int ret = factor(begin);
  while(true){
    if(*begin == '*'){
      ++begin;
      ret *= factor(begin);
    }else if(*begin == '/'){
      ++begin;
      ret /= factor(begin);
    }else{
      break;
    }
  }
  return ret;
}

int expression(State &begin){
  int ret = term(begin);
  while(true){
    if(*begin == '+'){
      ++begin;
      ret += term(begin);
    }else if(*begin == '-'){
      ++begin;
      ret -= term(begin);
    }else{
      break;
    }
  }
  return ret;
}