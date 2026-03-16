#include <iostream>
#include <string>
using namespace std;
int exp();
int term();
int factor();
int number();
int digit();
int p=0;
string str;
int main(){
  int n,re;
  cin >> n;
  while(n){
    p=0;
    cin >> str;
    re=exp();
    cout << re << endl;
    n--;
  }
  return 0;
}
int exp(){
  int val=term();
  while(str[p]=='+'||str[p]=='-'){
    if(str[p]=='+'){
      p++;
      val+=term();
    }else if(str[p]=='-'){
      p++;
      val-=term();
    }
  }
  return val;
}
int term(){
  int val=factor();
  while(str[p]=='*'||str[p]=='/'){
    if(str[p]=='*'){
      p++;
      val*=factor();
    }else if(str[p]=='/'){
      p++;
      val/=factor();
    }
  }
  return val;
}
int factor(){
  int val;
  if(str[p]=='('){
    p++;
    val=exp();
    p++;
  }else{
      val=digit();
  }
  return val;
}
int number(){
  int val=digit();
  return val;
}
int digit(){
  int ret,cnt=0;
  while(1){
    if(cnt==0&&'0'<=str[p]&&str[p]<='9'){
      ret=str[p]-'0';
      p++;
      cnt=1;
    }
    else if(cnt==1&&'0'<=str[p]&&str[p]<='9'){
      ret=ret*10+(str[p]-'0');
      p++;
    }
    else{
      break;
    }
  }
  /*  if('0' <= str[p] && str[p] <= '9') {
    if(cnt==0){
      ret=str[p]-'0';
      cnt=1;
    }
    p++;
    if('0' <= str[p] && str[p] <= '9') {
      ret=ret*10+(str[p]-'0');
      digit();
    }
    return ret;
    }*/
  return ret;
}