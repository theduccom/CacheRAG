#include<iostream>
#include<string>

using namespace std;

/*
 exp    ::= term    | exp  + term   | exp  - term
 term   ::= factor  | term * factor | term / factor
 factor ::= literal | (exp) | -factor
*/

int perseExp( string str );
int perseTerm( string str );
int perseFactor( string str );

int perseExp( string str ){
  //cout << "perseExp" << str << endl;
  int  nest = 0;
  char op   = 0;
  int pos;
  for(int i=str.size()-1; i>0; i--){
    char c = str[i];
    if(nest == 0 && (c == '+' || c == '-')){
      op = c;
      pos = i;
      break;
    }
    if(c == '('){
      nest--;
    }else if(c == ')'){
      nest++;
    }
    if(nest < 0)
      throw "Error: perseExp";
  }
  if(op == 0){
    return perseTerm(str);
  }else{
    int op1 = perseExp( str.substr(0, pos) );
    int op2 = perseTerm( str.substr(pos+1) );
    if(op == '+'){
      return op1 + op2;
    }else{
      return op1 - op2;
    }
  }
}

int perseTerm( string str ){
  //cout << "perseTerm" << str << endl;
  int nest = 0;
  char op = 0;
  int pos;
  for(int i=str.size()-1; i>0; i--){
    char c = str[i];
    if(nest == 0 && (c == '*' || c == '/')){
      op = c;
      pos = i;
      break;
    }
    if(c == '('){
      nest--;
    }else if(c == ')'){
      nest++;
    }
    if(nest < 0)
      throw "Error: perseTerm";
  }
  if(op == 0){
    return perseFactor(str);
  }else{
    int op1 = perseTerm( str.substr(0, pos) );
    int op2 = perseFactor( str.substr(pos+1) );
    if(op == '*'){
      return op1 * op2;
    }else{
      return op1 / op2;
    }
  }
}

int perseFactor( string str ){
  //cout << "perseFactor" << str << endl;
  if(str.size() == 0)
    throw "Parse Error: perseFactor";

  char firstStr = str[0];
  if(firstStr == '('){
    return perseExp( str.substr(1, str.size()-2) );
  }else if(firstStr == '-'){
    return -1 * perseFactor( str.substr(1) );
  }else{
    bool f = true;
    for(int i=0; i<str.size(); i++){
      if(!isdigit(str[i])) f = false;
    }
    if(f){
      int num; sscanf(str.c_str(), "%d", &num);
      return num;
    }else{
      return perseExp(str);
    }
  }
}

string trim(string str){
  while(str.find(' ') != -1) str.erase(str.find(' '), 1);
  while(str.find('=') != -1) str.erase(str.find('='), 1);
  return str;
}

int main(){
  int n;
  string str;
  getline(cin,str);
  sscanf(str.c_str(),"%d",&n);
  while(n-->0){
    getline(cin,str);
    str = trim(str);
    int ret = perseExp(str);
    cout << ret << endl;
  }
  return 0;
}