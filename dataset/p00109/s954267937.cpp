#include <iostream>
#include <string>
using namespace std;
string str;
int p;

int exp();
int factor();
int term();

int factor() {
  int num=0;
  while('0' <= str[p] && str[p] <= '9') {
    num*=10;
    num += str[p] - '0';
    p++;
  }

  //  cout <<"one"<< num << endl;
  if(num != 0) return num;

  else if (str[p] == '('){
    p++;
    num = exp();
  }
  if(str[p] == ')'){
    // cout <<"two"<< num << endl;
    p++;
    return num;
  } 
  return 0;
}

int term(){
 int val = factor();
  while(str[p] == '*' || str[p] == '/') {
    if(str[p] == '*') {
      p++;
      val *= factor();
    } else if(str[p] == '/'){
      p++;
      val /= factor();
    }
  }

  return val;
}
 
int exp() {
  int val = term();
  while(str[p] == '+' || str[p] == '-') {
    if(str[p] == '+') {
      p++;
      val += term();
    } else if(str[p] == '-'){
      p++;
      val -= term();
    }
  }

  return val;
}

int main() {
  int n;

  cin >> n;
  
  for(int i=0;i<n;i++) {
    p = 0;
  cin >> str;
  cout << exp() << endl;
  }
  return 0;
}