#include<iostream>
#include<string>

using namespace std;

string S;
size_t cur;

int digit(){
  return S[cur++]-'0';
}

int number(){
  int n=digit();
  while(cur<S.size()&&isdigit(S[cur])){
    n=n*10+digit();
  }
  return n;
}

int expression();

int factor(){
  if(isdigit(S[cur]))return number();
  cur++;
  int n=expression();
  cur++;
  return n;
}

int term(){
  int t=factor();
  for(;cur<S.size()&&(S[cur]=='*'||S[cur]=='/');){
    if(S[cur++]=='*')t*=factor();
	else t/=factor();
  }
  return t;
}

int expression(){
  int t=term();
  for(;cur<S.size()&&(S[cur]=='+'||S[cur]=='-');){
    if(S[cur++]=='+')t+=term();
	else t-=term();
  }
  return t;
}

int main(){
  int n;
  cin>>n;
  for(;n--;){
    cur=0;
    cin>>S;
	cout<<expression()<<endl;
  }
  return 0;
}