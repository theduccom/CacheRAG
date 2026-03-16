#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<string>
using namespace std;

class Parsing{
private:
  string parse;
  int pos;
public:

  Parsing(string s){
    parse = s;
    pos = 0;
  }
  int fact(){
    if(parse[pos] == '('){
      pos++;
      int p = expression();
      pos++;
      return p;
    }else{
      int p=0;
     
      while('0' <= parse[pos] && parse[pos] <= '9'){
	p *= 10;
	p += parse[pos]-'0';
	pos++;
      }
      return p;
    }
  }

 int term(){
    int p = fact();
    while(parse[pos] == '*' || parse[pos] == '/'){
      if(parse[pos] == '*'){pos++;p *= fact();}
      else {pos++;p /= fact();}
    }
    return p;
  }

 int expression(){
    int p = term();
    while(parse[pos] == '+' || parse[pos] == '-'){
      if(parse[pos] == '+'){pos++;p+=term();}
      else {pos++;p-=term();}
    }
    return p;
  } 
 

};








int main(){
  string s;
  int N;
  cin >> N;
  while(N-- > 0){
 
    cin >> s;
   
    Parsing par = Parsing(s.substr(0,s.length()-1));
    cout << par.expression() << endl;
    
  }
  return 0;
}