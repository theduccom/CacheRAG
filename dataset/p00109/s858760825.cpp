#include<iostream>
#include<stack>
#include<string>
#include <sstream>

using namespace std;
string s;
int idx;
int term();
int expr();
int fact();
int number();

// <term> = <fact> { (‘*’|‘/’) <fact> } 
int term(){
  int res = fact();
  while(s[idx] == '*' || s[idx] == '/'){
    char op = s[idx++];
    int tmp = fact(); 
    if(op == '*')
      res *= tmp;
    else res /= tmp;
  }
  return res;
}


// <expr> = <term> { (‘+’|‘-’) <term> }
int expr(){
  int res = term();
  while(s[idx] == '+' || s[idx] == '-'){
    char op = s[idx++];
    int tmp = term();
    if(op == '+') res += tmp;
    else res -= tmp;
  }
  return res;
}


// <number> = { <digit> }
// <digit> = ‘0’ | ‘1’ | ... | ‘9’
int number(){
  int res = 0;
  while('0' <= s[idx] && s[idx] <= '9'){
    res = res*10 + s[idx] - '0';
    idx++;
  }
  return res;
}

// <fact> = ‘(’ <expr> ‘)’ | <number> 
int fact(){ 
  int res; 
  if(s[idx] == '('){
    idx++; 
    res = expr();
    //assert( s[idx] == ')' ); 
    idx++;
  } 
  else{ 
    res = number(); 
  } 
  return res;
}


int main()
{
  int n;
  
  cin>>n;
  for(;n--;)
    {
      idx=0;
      cin>>s;
      cout << expr()<<endl;
    }
}