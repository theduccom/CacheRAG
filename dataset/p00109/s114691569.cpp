#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int i;
string str;
int Expression();
int Term();
int Factor();
int No(int);
int main(){
  int n;
  cin >> n;
  while(n--){
    cin >> str;
    i = 0;
    cout << Expression() << endl;
  }
}
int Expression(){
  int res = Term();
  while(1){
    switch(str[i]){
    case '+':
      i++;
      res += Term();
      break;
    case '-':
      i++;
      res -= Term();
      break;
    default:
      return res;
    }
  }
}
int Term(){
  int res = Factor();
  while(true){
    switch(str[i]){
    case '(':
      i++;
      res += Factor();
      break;
    case '*':
      i++;
      res *= Factor();
      break;
    case '/':
      i++;
      res /= Factor();
      break;
    default:
      return res;
    }
  }
}
int Factor(){
  int res = 0;
  switch(str[i]){
  case '(':
    i++;
    res = Expression();
    i++;
    return res;
  default:
    return No(i);
  }
}
int No(int old){
  while(isdigit(str[i])) i++;
  return atoi((str.substr(old,i)).c_str());
}