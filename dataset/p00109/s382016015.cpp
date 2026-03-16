#include <string>
#include<cctype>
#include<cstdio>
using namespace std;
typedef string::const_iterator State;
class ParseError {};

int expression(State &begin);

int number(State &begin){
  int ret=0;

  while(isdigit(*begin)){
    ret*=10;
    ret+=*begin-'0';
    begin++;
  }
  return ret;
}


int factor(State &begin){
  if(*begin=='('){
    begin++;
    int ret = expression(begin);
    begin++;
    return ret;
  }else{
    return number(begin);
  }
}

int term(State &begin){
  int ret = factor(begin);

  for(;;){
    if(*begin=='*'){
      begin++;
      ret*=factor(begin);
    }else if(*begin=='/'){
      begin++;
      ret/=factor(begin);
    }else{
      break;
    }
  }
  return ret;
}

int expression(State &begin){
  int ret=term(begin);

  for(;;){
    if(*begin=='+'){
      begin++;
      ret +=term(begin);
    }else if(*begin=='-'){
      begin++;
      ret-=term(begin);
    }else{
      break;
    }
  }
  return ret;
}

int main(){
  int N;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    char s[105];
    scanf("%s",s);
    string S(s);

    State begin=S.begin();
    int ans=expression(begin);
    printf("%d\n",ans);
  }
  return 0;
}