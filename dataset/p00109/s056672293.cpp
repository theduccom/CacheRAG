//18
#include<iostream>
#include<cctype>

using namespace std;

char s[101];
char *p;

int pp();
int pm();
int pb();

int pp(){
  int a=pm();
  while(*p=='+'||*p=='-'){
    char o=*p++;
    int b=pm();
    if(o=='+'){
      a+=b;
    }else{
      a-=b;
    }
  }
  return a;
}

int pm(){
  int a=pb();
  while(*p=='*'||*p=='/'){
    char o=*p++;
    int b=pb();
    if(o=='*'){
      a*=b;
    }else{
      a/=b;
    }
  }
  return a;
}

int pb(){
  if(*p=='('){
    p++;
    int a=pp();
    p++;
    return a;
  }else{
    int a=0;
    while(isdigit(*p)){
      a=a*10+*p-'0';
      p++;
    }
    return a;
  }
}

int main(){
  int n;
  cin>>n;
  while(n--){
    cin>>s;
    p=s;
    cout<<pp()<<endl;
  }
  return 0;
}