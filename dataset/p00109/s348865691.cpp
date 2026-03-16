#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int number(const string &s, int &k);
int fact(const string &s, int &k);
int term(const string &s, int &k);

int expr(const string &s, int &k){
  int result = term(s,k);
  while(true){
    if(s[k]=='+')result += term(s,++k);
    else if(s[k]=='-')result -= term(s,++k);
    else break;
  }
  return result;
}

int term(const string &s, int &k){
  int res = fact(s,k);
  while(true){
    if(s[k]=='*')res *= fact(s,++k);
    else if(s[k]=='/')res /= fact(s,++k);
    else break;
  }
  return res;
}

int fact(const string &s, int &k){
  if(s[k]=='('){
    int res = 0;
    ++k;
    res = expr(s,k);
    k++;
    return res;
  }
  return number(s,k);
}

int number(const string &s, int &k){
  int res = 0;
  while(isdigit(s[k])){
    res *= 10;
    res += (int)(s[k++] - '0');
  }
  return res;
}

int main(void){

  int n;
  cin >> n;

  while(n--){
    string s;
    cin >> s;
    int k = 0;
    cout << expr(s, k) << endl;
  }
  
  return 0;
}