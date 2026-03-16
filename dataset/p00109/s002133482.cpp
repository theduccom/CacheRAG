
#include <string>
#include <cctype>
#include<iostream>
#include<map>
#include<sstream>
using namespace std;
istream* input;
int no_of_errors;
enum Token_value {
  END,NUMBER,PLUS='+',MINUS='-',MUL='*',DIV='/',
  PRINT=';',ASSIGN='=',LP='(',RP=')'
};
Token_value curr_tok = PRINT;
int number_value;
string string_value;
Token_value get_token()
{
  char ch;
  do {
    if(!input->get(ch)) return curr_tok = END;
  } while (ch!='\n' && isspace(ch));
 
  switch (ch) {
  case ';':
  case '\n':
    return curr_tok=PRINT;
  case '*':
  case '/':
  case '+':
  case '-':
  case '(':
  case ')':
  case '=':
return curr_tok=Token_value(ch);
  case '0': case '1': case '2': case '3': case '4':
case '5': case '6': case '7': case '8': case '9':
    input->putback(ch);
    *input >> number_value;
    return curr_tok=NUMBER;
  }
}
int expr(bool);
int prim(bool get)
{
  if (get) get_token();
  switch (curr_tok) {
  case NUMBER:
    { int v = number_value;
      get_token();
      return v;
    }
  case MINUS:
    return -prim(true);
  case LP:
    { int e = expr(true);
      get_token();
      return e;
    }
  }
}
int term(bool get)
{
  int left = prim(get);
  for (;;)
    switch (curr_tok) {
    case MUL:
      left *= prim(true);
      break;
    case DIV:
      if (int d = prim(true)) {
left /= d;
break;
      }
    default:
      return left;
    }
}
int expr(bool get)
{
  int left = term(get);
  for (;;)
    switch (curr_tok) {
    case PLUS:
      left += term(true);
      break;
    case MINUS:
      left -= term(true);
      break;
    default:
      return left;
    }
}
int main()
{
  int n;
  input = &cin;
  cin>>n;
  while(n--){
    while (*input) {
      get_token();
      if (curr_tok == END) break;
      if (curr_tok == PRINT) continue;
      cout << expr(false) << '\n';
    }
  }
  return no_of_errors;
} 