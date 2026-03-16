#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
#define INF 0x7FFFFFFF
#define ll long long

ll expr();
ll term();
ll fac();
int left();
char peek();
char pop();
int isdeg(char z);
int isdeg(char z);
void eat(char z);
ll num();

string s;
int t;

int main(){
  int n;
  cin >> n;
  cin >> s;
  while(n){
    long long ans=0;
    t=0;
    s.pop_back();
    ans=expr();
    n--;
    cout << ans << endl;
    cin >> s;
  }
}


ll expr(){
  ll res=term();
  while(left()&&(peek()=='+'||peek()=='-')){
    if(peek()=='+'){
      eat('+');
      res+=term();
    }
    else if(peek()=='-'){
      eat('-');
      res-=term();
    }
  }
  return res;
}

ll term(){
  ll res=fac();
  while(left()&&(peek()=='*'||peek()=='/')){
    if(peek()=='*'){
      eat('*');
      res*=fac();
    }
    else if(peek()=='/'){
      eat('/');
      res/=fac();
    }
  }
  return res;
}

ll fac(){
  if(peek()=='('){
    eat('(');
    ll res=expr();
    eat(')');
    return res;
  }
  else{
    return num();
  }
}


int left(){                 //まだ文字列が残っているかを調べる
  return int(s.size())>t;
}

char peek(){                //次の文字を一文字先読みする
  return s[t];
}

char pop(){                 //次の文字を読みとって、インデックスを進める
  t++;
  return s[t-1];
}

int isdeg(char z){
  return z>='0'&&z<='9';
}

void eat(char z){
  if(s[t]!=z) cout << "warning " << t << endl;
  t++;
}

ll num(){
  ll res=0;
  while(left()&&isdeg(peek())){
    res*=10;
    res+=pop()-'0';
  }
  return res;
}

