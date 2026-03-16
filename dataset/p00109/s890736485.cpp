#include <iostream>
#include <string>
using namespace std;

int exp();
int term();
int factor();
int number();
int digit();

string str;

int p,len,val;

int exp(){
  int val = term();
  while( str[p] == '+' || str[p] == '-' ){
    if( str[p] == '+' ){
      p++;
      val += term();
    }else if( str[p] == '-' ){
      p++;
      val -= term();
    }
  }
  return val;
}

int term(){
  int val=factor();
  while( str[p] == '*' || str[p] == '/' ){
    if( str[p] == '*' ){
      p++;
      val *= factor();
    }else if( str[p] == '/' ){
      p++;
      val /= factor();
    }
  }
  return val;
}

int factor(){
  int val;
  if( str[p] == '(' ){
      p++;
      val =  exp();
      p++;
  }else{
    val = number();
  }

  return val;
}

int number(){
  int val = 0;
  while( digit() ){
    int num = str[p] - '0';
    val = val * 10 + num;
    p++;
  }
  return val;
}

int digit(){
  if( str[p] == '1' || str[p] == '2' || str[p] == '3' || str[p] == '4' ||
      str[p] == '5' || str[p] == '6' || str[p] == '7' || str[p] == '8' ||
      str[p] == '9' || str[p] == '0' ) return 1;
  return 0;
}

  
int main(){
  int n; cin >> n;
  
  for(int i = 0; i < n; i++ ){
    p = 0;
    cin >> str;
    
    int ans = exp();      
    
    cout << ans << endl;
    
  }
  
  return 0;
}