#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<cstring>

using namespace std;

char siki[200];
int cur;


int digit(){
  int n=siki[cur]-'0';
  ++cur;
  return n;
}

int number(){
  int n=digit();
  while(cur<strlen(siki) && isdigit(siki[cur]))
    n=n*10+digit();

  return n;
}

int factor();

int term(){
  int a=factor();
  while(cur<strlen(siki) && (siki[cur]=='*' || siki[cur]=='/')){
    char op=siki[cur];
    ++cur;
    int b=factor();
    if(op=='*')a*=b;else a/=b;
  }
  return a;
}

int expression(){
  int a=term();
  while(cur<strlen(siki) && (siki[cur]=='+' || siki[cur]=='-')){
    char op=siki[cur];
    cur++;
    int b=term();
    if(op=='+')a+=b;else a-=b;
  }
  return a;
}

int factor(){
  if(siki[cur]!='(')return number();
  cur++;
  int n=expression();
  cur++;
  return n;
}

int main(){
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>siki;
    cur=0;
    cout<<expression()<<endl;
  }
}