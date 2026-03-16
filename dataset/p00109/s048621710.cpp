#include <iostream>
#include <string>
using namespace std;

string str;
int pos;

int exp();
int term();
int factor();
int henkan(string);
int ruijou(int);

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    str="";
    getchar();
    while(1){
      char temp;
      cin >> temp;
      if(temp=='=') break;
      str+=temp;
    }
    
    pos=0;
    int ans=0;
    ans=exp();

    cout << ans << endl;
  }
  return 0;
}

int exp(){
  int x=term();
  
  while(str[pos]=='+' || str[pos]=='-'){
    char op=str[pos];
    pos++;
    if(op=='+'){
      x+=term();
    }
    else{
      x-=term();
    }
  }
  return x;
}

int term(){
  int x=factor();
  while(str[pos]=='*' || str[pos]=='/'){
    char op=str[pos];
    pos++;
    if(op=='*') x*=factor();
    else x/=factor();
  }
  return x;
}

int factor(){
  int x;

  if(str[pos]=='('){
    pos++;
    x=exp();
    pos++;
  }
  else{
    string number="";
    int i=pos;
    while(str[i]>='0' && str[i]<='9'){
      number+=str[i];
      i++;
    }
    pos=i;
    x=henkan(number);
  }
  
  return x;
}

int henkan(string number){
  int size=number.size();
  int sum=0;
  
  for(int i=0;i<size;i++){
    sum+=(number[i]-'0')*ruijou(size-i-1);
  }
  return sum;
}

int ruijou(int n){
  int sum=1;
  
  for(int i=0;i<n;i++){
    sum*=10;
  }
  
  return sum;
}